<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceAsyncIf extends \IThriftAsyncIf {
  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public function second(int $count): Awaitable<bool>;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public function second(int $count): bool;
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceAsyncClientIf extends MyServiceAsyncIf {
}

/**
 * Original thrift service:-
 * MyService
 */
interface MyServiceClientIf extends \IThriftSyncIf {
  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public function second(int $count): Awaitable<bool>;
}

/**
 * Original thrift service:-
 * MyService
 */
trait MyServiceClientBase {
  require extends \ThriftClientBase;


  protected function recvImpl_second(?int $expectedsequenceid = null, shape(?'read_options' => int) $options = shape()): bool {
    try {
      $this->eventHandler_->preRecv('second', $expectedsequenceid);
      if ($this->input_ is \TBinaryProtocolAccelerated) {
        $result = \thrift_protocol_read_binary($this->input_, 'MyService_second_result', $this->input_->isStrictRead(), Shapes::idx($options, 'read_options', 0));
      } else if ($this->input_ is \TCompactProtocolAccelerated)
      {
        $result = \thrift_protocol_read_compact($this->input_, 'MyService_second_result', Shapes::idx($options, 'read_options', 0));
      }
      else
      {
        $rseqid = 0;
        $fname = '';
        $mtype = 0;

        $this->input_->readMessageBegin(
          inout $fname,
          inout $mtype,
          inout $rseqid,
        );
        if ($mtype === \TMessageType::EXCEPTION) {
          $x = new \TApplicationException();
          $x->read($this->input_);
          $this->input_->readMessageEnd();
          throw $x;
        }
        $result = MyService_second_result::withDefaultValues();
        $result->read($this->input_);
        $this->input_->readMessageEnd();
        if ($expectedsequenceid !== null && ($rseqid !== $expectedsequenceid)) {
          throw new \TProtocolException("second failed: sequence id is out of order");
        }
      }
    } catch (\THandlerShortCircuitException $ex) {
      switch ($ex->resultType) {
        case \THandlerShortCircuitException::R_EXPECTED_EX:
          $this->eventHandler_->recvException('second', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_UNEXPECTED_EX:
          $this->eventHandler_->recvError('second', $expectedsequenceid, $ex->result);
          throw $ex->result;
        case \THandlerShortCircuitException::R_SUCCESS:
        default:
          $this->eventHandler_->postRecv('second', $expectedsequenceid, $ex->result);
          return $ex->result;
      }
    } catch (\Exception $ex) {
      $this->eventHandler_->recvError('second', $expectedsequenceid, $ex);
      throw $ex;
    }
    if ($result->success !== null) {
      $success = $result->success;
      $this->eventHandler_->postRecv('second', $expectedsequenceid, $success);
      return $success;
    }
    $x = new \TApplicationException("second failed: unknown result", \TApplicationException::MISSING_RESULT);
    $this->eventHandler_->recvError('second', $expectedsequenceid, $x);
    throw $x;
  }

}

class MyServiceAsyncClient extends \ThriftClientBase implements MyServiceAsyncClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public async function second(int $count): Awaitable<bool> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("MyService", "second");
    $args = MyService_second_args::fromShape(shape(
      'count' => $count,
    ));
    $currentseqid = $this->sendImplHelper($args, "second", false);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_second($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

}

class MyServiceClient extends \ThriftClientBase implements MyServiceClientIf {
  use MyServiceClientBase;

  /**
   * Original thrift definition:-
   * bool
   *   second(1: i64 count);
   */
  public async function second(int $count): Awaitable<bool> {
    $hh_frame_metadata = $this->getHHFrameMetadata();
    if ($hh_frame_metadata !== null) {
      \HH\set_frame_metadata($hh_frame_metadata);
    }
    $rpc_options = $this->getAndResetOptions() ?? \ThriftClientBase::defaultOptions();
    await $this->asyncHandler_->genBefore("MyService", "second");
    $args = MyService_second_args::fromShape(shape(
      'count' => $count,
    ));
    $currentseqid = $this->sendImplHelper($args, "second", false);
    $channel = $this->channel_;
    $out_transport = $this->output_->getTransport();
    $in_transport = $this->input_->getTransport();
    if ($channel !== null && $out_transport is \TMemoryBuffer && $in_transport is \TMemoryBuffer) {
      $msg = $out_transport->getBuffer();
      $out_transport->resetBuffer();
      list($result_msg, $_read_headers) = await $channel->genSendRequestResponse($rpc_options, $msg);
      $in_transport->resetBuffer();
      $in_transport->write($result_msg);
    } else {
      await $this->asyncHandler_->genWait($currentseqid);
    }
    $response = $this->recvImpl_second($currentseqid);
    await $this->asyncHandler_->genAfter();
    return $response;
  }

  /* send and recv functions */
  public function send_second(int $count): int {
    $args = MyService_second_args::fromShape(shape(
      'count' => $count,
    ));
    return $this->sendImplHelper($args, "second", false);
  }
  public function recv_second(?int $expectedsequenceid = null): bool {
    return $this->recvImpl_second($expectedsequenceid);
  }
}

// HELPER FUNCTIONS AND STRUCTURES

class MyService_second_args implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'count',
      'type' => \TType::I64,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'count' => 1,
  ];

  const type TConstructorShape = shape(
    ?'count' => ?int,
  );

  const type TShape = shape(
    'count' => int,
  );
  const int STRUCTURAL_ID = 6887469671700782815;
  public int $count;

  public function __construct(?int $count = null)[] {
    $this->count = $count ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'count'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'count'),
    );
  }

  public function getName()[]: string {
    return 'MyService_second_args';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "annotations.second_args",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "count",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    $structured_annotation_recursive0 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive0->name = "abc_service_method";

    $structured_annotation_recursive1 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive1->name = "cba_service_method";

    $structured_annotation_recursive0->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive1);

    $structured_annotation_recursive0->default = structured_annotation_with_default::fromShape(
      shape(
        "count" => 3,
      )
    );

    $structured_annotation_recursive2 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive2->name = "key_service_method1";

    $structured_annotation_recursive3 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive3->name = "def_service_method";

    $structured_annotation_recursive2->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive3);

    $structured_annotation_recursive4 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive4->name = "key_service_method2";

    $structured_annotation_recursive5 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive5->name = "fed_service_method";

    $structured_annotation_recursive4->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive5);

    $structured_annotation_recursive0->recurse_map = dict[
      "key_service_method1" => $structured_annotation_recursive2,
      "key_servic_methode2" => $structured_annotation_recursive4,
    ];

    return shape(
      'struct' => dict[],
      'fields' => dict[
        'count' => shape(
          'field' => dict[
            'structured_annotation_recursive' => $structured_annotation_recursive0,
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function __stringifyMapKeys<T>(dict<arraykey, T> $m)[]: dict<string, T> {
    return Dict\map_keys($m, $key ==> (string)$key);
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['count'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'count' => $this->count,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'count') !== null) {
      $this->count = /* HH_FIXME[4110] */ $parsed['count'];
    }
  }

}

class MyService_second_result implements \IThriftSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    0 => shape(
      'var' => 'success',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'success' => 0,
  ];

  const type TConstructorShape = shape(
    ?'success' => ?bool,
  );

  const int STRUCTURAL_ID = 8594383818423018844;
  public ?bool $success;

  public function __construct(?bool $success = null)[] {
    $this->success = $success;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'success'),
    );
  }

  public static function fromMap_DEPRECATED(@KeyedContainer<string, mixed> $map)[]: this {
    return new static(
      /* HH_FIXME[4110] For backwards compatibility with map's mixed values. */
      idx($map, 'success'),
    );
  }

  public function getName()[]: string {
    return 'MyService_second_result';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "annotations.MyService_second_result",
        "fields" => vec[
          tmeta_ThriftField::fromShape(
            shape(
              "id" => 0,
              "type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "success",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
      ],
    );
  }

  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'success') !== null) {
      $this->success = /* HH_FIXME[4110] */ $parsed['success'];
    }
  }

}

class MyServiceStaticMetadata implements \IThriftServiceStaticMetadata {
  public static function getServiceMetadata()[]: \tmeta_ThriftService {
    return tmeta_ThriftService::fromShape(
      shape(
        "name" => "annotations.MyService",
        "functions" => vec[
          tmeta_ThriftFunction::fromShape(
            shape(
              "name" => "second",
              "return_type" => tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "arguments" => vec[
                tmeta_ThriftField::fromShape(
                  shape(
                    "id" => 1,
                    "type" => tmeta_ThriftType::fromShape(
                      shape(
                        "t_primitive" => tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                      )
                    ),
                    "name" => "count",
                  )
                ),
              ],
            )
          ),
        ],
      )
    );
  }

  public static function getServiceMetadataResponse()[]: \tmeta_ThriftServiceMetadataResponse {
    return \tmeta_ThriftServiceMetadataResponse::fromShape(
      shape(
        'context' => \tmeta_ThriftServiceContext::fromShape(
          shape(
            'service_info' => self::getServiceMetadata(),
            'module' => \tmeta_ThriftModuleContext::fromShape(
              shape(
                'name' => 'annotations',
              )
            ),
          )
        ),
        'metadata' => \tmeta_ThriftMetadata::fromShape(
          shape(
            'enums' => dict[
            ],
            'structs' => dict[
            ],
            'exceptions' => dict[
            ],
            'services' => dict[
            ],
          )
        ),
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TServiceAnnotations {
    $structured_annotation_recursive0 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive0->name = "abc_service";

    $structured_annotation_recursive1 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive1->name = "cba_service";

    $structured_annotation_recursive0->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive1);

    $structured_annotation_recursive0->default = structured_annotation_with_default::fromShape(
      shape(
        "count" => 3,
      )
    );

    $structured_annotation_recursive2 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive2->name = "key_service1";

    $structured_annotation_recursive3 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive3->name = "def_service";

    $structured_annotation_recursive2->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive3);

    $structured_annotation_recursive4 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive4->name = "key_service2";

    $structured_annotation_recursive5 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive5->name = "fed_service";

    $structured_annotation_recursive4->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive5);

    $structured_annotation_recursive0->recurse_map = dict[
      "key_service1" => $structured_annotation_recursive2,
      "key_service2" => $structured_annotation_recursive4,
    ];

    $structured_annotation_recursive6 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive6->name = "abc_service_method";

    $structured_annotation_recursive7 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive7->name = "cba_service_method";

    $structured_annotation_recursive6->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive7);

    $structured_annotation_recursive6->default = structured_annotation_with_default::fromShape(
      shape(
        "count" => 3,
      )
    );

    $structured_annotation_recursive8 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive8->name = "key_service_method1";

    $structured_annotation_recursive9 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive9->name = "def_service_method";

    $structured_annotation_recursive8->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive9);

    $structured_annotation_recursive10 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive10->name = "key_service_method2";

    $structured_annotation_recursive11 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive11->name = "fed_service_method";

    $structured_annotation_recursive10->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive11);

    $structured_annotation_recursive6->recurse_map = dict[
      "key_service_method1" => $structured_annotation_recursive8,
      "key_servic_methode2" => $structured_annotation_recursive10,
    ];

    return shape(
      'service' => dict[
        'structured_annotation_recursive' => $structured_annotation_recursive0,
      ],
      'functions' => dict[
        'second' => dict[
          'structured_annotation_recursive' => $structured_annotation_recursive6,
        ],
      ],
    );
  }
}

