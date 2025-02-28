<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

namespace fixtures\basic;

/**
 * Original thrift enum:-
 * MyEnum
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/MyEnum'))>>
enum MyEnum: int {
  MyValue1 = 0;
  MyValue2 = 1;
}

class MyEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.MyEnum",
        "elements" => dict[
          0 => "MyValue1",
          1 => "MyValue2",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[],
      'constants' => dict[
      ],
    );
  }
}

/**
 * Original thrift enum:-
 * HackEnum
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/HackEnum'))>>
enum RenamedEnum: int {
  Value1 = 0;
  renamedValue = 1;
}

class RenamedEnum_TEnumStaticMetadata implements \IThriftEnumStaticMetadata {
  public static function getEnumMetadata()[]: \tmeta_ThriftEnum {
    return \tmeta_ThriftEnum::fromShape(
      shape(
        "name" => "module.HackEnum",
        "elements" => dict[
          0 => "Value1",
          1 => "Value2",
        ],
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TEnumAnnotations {
    return shape(
      'enum' => dict[
        '\facebook\thrift\annotation\Name' => \facebook\thrift\annotation\Name::fromShape(
          shape(
            "name" => "RenamedEnum",
          )
        ),
      ],
      'constants' => dict[
        'Value2' => dict[
          '\facebook\thrift\annotation\Name' => \facebook\thrift\annotation\Name::fromShape(
            shape(
              "name" => "renamedValue",
            )
          ),
        ],
      ],
    );
  }
}

/**
 * Original thrift struct:-
 * MyStruct
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/MyStruct'))>>
class MyStruct implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'MyIntField',
      'type' => \TType::I64,
    ),
    2 => shape(
      'var' => 'MyStringField',
      'type' => \TType::STRING,
    ),
    3 => shape(
      'var' => 'MyDataField',
      'type' => \TType::STRUCT,
      'class' => \fixtures\basic\MyDataItem::class,
    ),
    4 => shape(
      'var' => 'myEnum',
      'type' => \TType::I32,
      'enum' => \fixtures\basic\MyEnum::class,
    ),
    5 => shape(
      'var' => 'oneway',
      'type' => \TType::BOOL,
    ),
    6 => shape(
      'var' => 'readonly',
      'type' => \TType::BOOL,
    ),
    7 => shape(
      'var' => 'idempotent',
      'type' => \TType::BOOL,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'MyIntField' => 1,
    'MyStringField' => 2,
    'MyDataField' => 3,
    'myEnum' => 4,
    'oneway' => 5,
    'readonly' => 6,
    'idempotent' => 7,
  ];

  const type TConstructorShape = shape(
    ?'MyIntField' => ?int,
    ?'MyStringField' => ?string,
    ?'MyDataField' => ?\fixtures\basic\MyDataItem,
    ?'myEnum' => ?\fixtures\basic\MyEnum,
    ?'oneway' => ?bool,
    ?'readonly' => ?bool,
    ?'idempotent' => ?bool,
  );

  const type TShape = shape(
    'MyIntField' => int,
    'MyStringField' => string,
    ?'MyDataField' => ?\fixtures\basic\MyDataItem::TShape,
    ?'myEnum' => ?\fixtures\basic\MyEnum,
    'oneway' => bool,
    'readonly' => bool,
    'idempotent' => bool,
    ...
  );
  const int STRUCTURAL_ID = 4991963907375804067;
  /**
   * Original thrift field:-
   * 1: i64 MyIntField
   */
  public int $MyIntField;
  /**
   * Original thrift field:-
   * 2: string MyStringField
   */
  public string $MyStringField;
  /**
   * Original thrift field:-
   * 3: struct module.MyDataItem MyDataField
   */
  public ?\fixtures\basic\MyDataItem $MyDataField;
  /**
   * Original thrift field:-
   * 4: enum module.MyEnum myEnum
   */
  public ?\fixtures\basic\MyEnum $myEnum;
  /**
   * Original thrift field:-
   * 5: bool oneway
   */
  public bool $oneway;
  /**
   * Original thrift field:-
   * 6: bool readonly
   */
  public bool $readonly;
  /**
   * Original thrift field:-
   * 7: bool idempotent
   */
  public bool $idempotent;

  public function __construct(?int $MyIntField = null, ?string $MyStringField = null, ?\fixtures\basic\MyDataItem $MyDataField = null, ?\fixtures\basic\MyEnum $myEnum = null, ?bool $oneway = null, ?bool $readonly = null, ?bool $idempotent = null)[] {
    $this->MyIntField = $MyIntField ?? 0;
    $this->MyStringField = $MyStringField ?? '';
    $this->MyDataField = $MyDataField;
    $this->myEnum = $myEnum;
    $this->oneway = $oneway ?? false;
    $this->readonly = $readonly ?? false;
    $this->idempotent = $idempotent ?? false;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'MyIntField'),
      Shapes::idx($shape, 'MyStringField'),
      Shapes::idx($shape, 'MyDataField'),
      Shapes::idx($shape, 'myEnum'),
      Shapes::idx($shape, 'oneway'),
      Shapes::idx($shape, 'readonly'),
      Shapes::idx($shape, 'idempotent'),
    );
  }

  public function getName()[]: string {
    return 'MyStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyStruct",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I64_TYPE,
                )
              ),
              "name" => "MyIntField",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_STRING_TYPE,
                )
              ),
              "name" => "MyStringField",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_typedef" => \tmeta_ThriftTypedefType::fromShape(
                    shape(
                      "name" => "module.MyDataItem",
                      "underlyingType" => \tmeta_ThriftType::fromShape(
                        shape(
                          "t_struct" => \tmeta_ThriftStructType::fromShape(
                            shape(
                              "name" => "module.MyDataItem",
                            )
                          ),
                        )
                      ),
                    )
                  ),
                )
              ),
              "name" => "MyDataField",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 4,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.MyEnum",
                    )
                  ),
                )
              ),
              "name" => "myEnum",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 5,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "oneway",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 6,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "readonly",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 7,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_BOOL_TYPE,
                )
              ),
              "name" => "idempotent",
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

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['MyIntField'],
      $shape['MyStringField'],
      Shapes::idx($shape, 'MyDataField') === null ? null : (\fixtures\basic\MyDataItem::__fromShape($shape['MyDataField'])),
      Shapes::idx($shape, 'myEnum'),
      $shape['oneway'],
      $shape['readonly'],
      $shape['idempotent'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'MyIntField' => $this->MyIntField,
      'MyStringField' => $this->MyStringField,
      'MyDataField' => $this->MyDataField?->__toShape(),
      'myEnum' => $this->myEnum,
      'oneway' => $this->oneway,
      'readonly' => $this->readonly,
      'idempotent' => $this->idempotent,
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

    if (idx($parsed, 'MyIntField') !== null) {
      $this->MyIntField = /* HH_FIXME[4110] */ $parsed['MyIntField'];
    }
    if (idx($parsed, 'MyStringField') !== null) {
      $this->MyStringField = /* HH_FIXME[4110] */ $parsed['MyStringField'];
    }
    if (idx($parsed, 'MyDataField') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['MyDataField']);
      $_tmp1 = \fixtures\basic\MyDataItem::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->MyDataField = $_tmp1;
    }
    if (idx($parsed, 'myEnum') !== null) {
      $this->myEnum = \fixtures\basic\MyEnum::coerce(/* HH_FIXME[4110] */ $parsed['myEnum']);
    }
    if (idx($parsed, 'oneway') !== null) {
      $this->oneway = /* HH_FIXME[4110] */ $parsed['oneway'];
    }
    if (idx($parsed, 'readonly') !== null) {
      $this->readonly = /* HH_FIXME[4110] */ $parsed['readonly'];
    }
    if (idx($parsed, 'idempotent') !== null) {
      $this->idempotent = /* HH_FIXME[4110] */ $parsed['idempotent'];
    }
  }

}

/**
 * Original thrift struct:-
 * MyDataItem
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/MyDataItem'))>>
class MyDataItem implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
  ];
  const dict<string, int> FIELDMAP = dict[
  ];

  const type TConstructorShape = shape(
  );

  const type TShape = shape(
    ...
  );
  const int STRUCTURAL_ID = 957977401221134810;

  public function __construct()[] {
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
    );
  }

  public function getName()[]: string {
    return 'MyDataItem';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyDataItem",
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

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
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

  }

}

enum MyUnionEnum: int {
  _EMPTY_ = 0;
  myEnum = 1;
  myStruct = 2;
  myDataItem = 3;
}

/**
 * Original thrift struct:-
 * MyUnion
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/MyUnion'))>>
class MyUnion implements \IThriftSyncStruct, \IThriftUnion<\fixtures\basic\MyUnionEnum>, \IThriftShapishSyncStruct {
  use \ThriftUnionSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'myEnum',
      'union' => true,
      'type' => \TType::I32,
      'enum' => \fixtures\basic\MyEnum::class,
    ),
    2 => shape(
      'var' => 'myStruct',
      'union' => true,
      'type' => \TType::STRUCT,
      'class' => \fixtures\basic\MyStruct::class,
    ),
    3 => shape(
      'var' => 'myDataItem',
      'union' => true,
      'type' => \TType::STRUCT,
      'class' => \fixtures\basic\MyDataItem::class,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'myEnum' => 1,
    'myStruct' => 2,
    'myDataItem' => 3,
  ];

  const type TConstructorShape = shape(
    ?'myEnum' => ?\fixtures\basic\MyEnum,
    ?'myStruct' => ?\fixtures\basic\MyStruct,
    ?'myDataItem' => ?\fixtures\basic\MyDataItem,
  );

  const type TShape = shape(
    ?'myEnum' => ?\fixtures\basic\MyEnum,
    ?'myStruct' => ?\fixtures\basic\MyStruct::TShape,
    ?'myDataItem' => ?\fixtures\basic\MyDataItem::TShape,
    ...
  );
  const int STRUCTURAL_ID = 4641160414833587430;
  /**
   * Original thrift field:-
   * 1: enum module.MyEnum myEnum
   */
  public ?\fixtures\basic\MyEnum $myEnum;
  /**
   * Original thrift field:-
   * 2: struct module.MyStruct myStruct
   */
  public ?\fixtures\basic\MyStruct $myStruct;
  /**
   * Original thrift field:-
   * 3: struct module.MyDataItem myDataItem
   */
  public ?\fixtures\basic\MyDataItem $myDataItem;
  protected \fixtures\basic\MyUnionEnum $_type = \fixtures\basic\MyUnionEnum::_EMPTY_;

  public function __construct(?\fixtures\basic\MyEnum $myEnum = null, ?\fixtures\basic\MyStruct $myStruct = null, ?\fixtures\basic\MyDataItem $myDataItem = null)[] {
    $this->_type = \fixtures\basic\MyUnionEnum::_EMPTY_;
    if ($myEnum !== null) {
      $this->myEnum = $myEnum;
      $this->_type = \fixtures\basic\MyUnionEnum::myEnum;
    }
    if ($myStruct !== null) {
      $this->myStruct = $myStruct;
      $this->_type = \fixtures\basic\MyUnionEnum::myStruct;
    }
    if ($myDataItem !== null) {
      $this->myDataItem = $myDataItem;
      $this->_type = \fixtures\basic\MyUnionEnum::myDataItem;
    }
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'myEnum'),
      Shapes::idx($shape, 'myStruct'),
      Shapes::idx($shape, 'myDataItem'),
    );
  }

  public function getName()[]: string {
    return 'MyUnion';
  }

  public function getType()[]: \fixtures\basic\MyUnionEnum {
    return $this->_type;
  }

  public function reset()[write_props]: void {
    switch ($this->_type) {
      case \fixtures\basic\MyUnionEnum::myEnum:
        $this->myEnum = null;
        break;
      case \fixtures\basic\MyUnionEnum::myStruct:
        $this->myStruct = null;
        break;
      case \fixtures\basic\MyUnionEnum::myDataItem:
        $this->myDataItem = null;
        break;
      case \fixtures\basic\MyUnionEnum::_EMPTY_:
        break;
    }
    $this->_type = \fixtures\basic\MyUnionEnum::_EMPTY_;
  }

  public function set_myEnum(\fixtures\basic\MyEnum $myEnum)[write_props]: this {
    $this->reset();
    $this->_type = \fixtures\basic\MyUnionEnum::myEnum;
    $this->myEnum = $myEnum;
    return $this;
  }

  public function get_myEnum()[]: ?\fixtures\basic\MyEnum {
    return $this->myEnum;
  }

  public function getx_myEnum()[]: \fixtures\basic\MyEnum {
    invariant(
      $this->_type === \fixtures\basic\MyUnionEnum::myEnum,
      'get_myEnum called on an instance of MyUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->myEnum as nonnull;
  }

  public function set_myStruct(\fixtures\basic\MyStruct $myStruct)[write_props]: this {
    $this->reset();
    $this->_type = \fixtures\basic\MyUnionEnum::myStruct;
    $this->myStruct = $myStruct;
    return $this;
  }

  public function get_myStruct()[]: ?\fixtures\basic\MyStruct {
    return $this->myStruct;
  }

  public function getx_myStruct()[]: \fixtures\basic\MyStruct {
    invariant(
      $this->_type === \fixtures\basic\MyUnionEnum::myStruct,
      'get_myStruct called on an instance of MyUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->myStruct as nonnull;
  }

  public function set_myDataItem(\fixtures\basic\MyDataItem $myDataItem)[write_props]: this {
    $this->reset();
    $this->_type = \fixtures\basic\MyUnionEnum::myDataItem;
    $this->myDataItem = $myDataItem;
    return $this;
  }

  public function get_myDataItem()[]: ?\fixtures\basic\MyDataItem {
    return $this->myDataItem;
  }

  public function getx_myDataItem()[]: \fixtures\basic\MyDataItem {
    invariant(
      $this->_type === \fixtures\basic\MyUnionEnum::myDataItem,
      'get_myDataItem called on an instance of MyUnion whose current type is %s',
      (string)$this->_type,
    );
    return $this->myDataItem as nonnull;
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.MyUnion",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_enum" => \tmeta_ThriftEnumType::fromShape(
                    shape(
                      "name" => "module.MyEnum",
                    )
                  ),
                )
              ),
              "name" => "myEnum",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 2,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyStruct",
                    )
                  ),
                )
              ),
              "name" => "myStruct",
            )
          ),
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 3,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_struct" => \tmeta_ThriftStructType::fromShape(
                    shape(
                      "name" => "module.MyDataItem",
                    )
                  ),
                )
              ),
              "name" => "myDataItem",
            )
          ),
        ],
        "is_union" => true,
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

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'myEnum'),
      Shapes::idx($shape, 'myStruct') === null ? null : (\fixtures\basic\MyStruct::__fromShape($shape['myStruct'])),
      Shapes::idx($shape, 'myDataItem') === null ? null : (\fixtures\basic\MyDataItem::__fromShape($shape['myDataItem'])),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'myEnum' => $this->myEnum,
      'myStruct' => $this->myStruct?->__toShape(),
      'myDataItem' => $this->myDataItem?->__toShape(),
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $this->_type = \fixtures\basic\MyUnionEnum::_EMPTY_;
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'myEnum') !== null) {
      $this->myEnum = \fixtures\basic\MyEnum::coerce(/* HH_FIXME[4110] */ $parsed['myEnum']);
      $this->_type = \fixtures\basic\MyUnionEnum::myEnum;
    }
    if (idx($parsed, 'myStruct') !== null) {
      $_tmp0 = json_encode(/* HH_FIXME[4110] */ $parsed['myStruct']);
      $_tmp1 = \fixtures\basic\MyStruct::withDefaultValues();
      $_tmp1->readFromJson($_tmp0);
      $this->myStruct = $_tmp1;
      $this->_type = \fixtures\basic\MyUnionEnum::myStruct;
    }
    if (idx($parsed, 'myDataItem') !== null) {
      $_tmp2 = json_encode(/* HH_FIXME[4110] */ $parsed['myDataItem']);
      $_tmp3 = \fixtures\basic\MyDataItem::withDefaultValues();
      $_tmp3->readFromJson($_tmp2);
      $this->myDataItem = $_tmp3;
      $this->_type = \fixtures\basic\MyUnionEnum::myDataItem;
    }
  }

}

/**
 * Original thrift struct:-
 * ReservedKeyword
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/ReservedKeyword'))>>
class MyRenamedStruct implements \IThriftSyncStruct, \IThriftShapishSyncStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'reserved_field',
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reserved_field' => 1,
  ];

  const type TConstructorShape = shape(
    ?'reserved_field' => ?int,
  );

  const type TShape = shape(
    'reserved_field' => int,
    ...
  );
  const int STRUCTURAL_ID = 9144321583101923955;
  /**
   * Original thrift field:-
   * 1: i32 reserved_field
   */
  public int $reserved_field;

  public function __construct(?int $reserved_field = null)[] {
    $this->reserved_field = $reserved_field ?? 0;
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reserved_field'),
    );
  }

  public function getName()[]: string {
    return 'MyRenamedStruct';
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.ReservedKeyword",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "reserved_field",
            )
          ),
        ],
        "is_union" => false,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Name' => \facebook\thrift\annotation\Name::fromShape(
          shape(
            "name" => "MyRenamedStruct",
          )
        ),
      ],
      'fields' => dict[
        'reserved_field' => shape(
          'field' => dict[
            '\facebook\thrift\annotation\Name' => \facebook\thrift\annotation\Name::fromShape(
              shape(
                "name" => "renamed_field",
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      $shape['reserved_field'],
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'reserved_field' => $this->reserved_field,
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

    if (idx($parsed, 'reserved_field') !== null) {
      $_tmp0 = (int)/* HH_FIXME[4110] */ $parsed['reserved_field'];
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->reserved_field = (int)$_tmp0;
      }
    }
  }

}

enum MyRenamedUnionEnum: int {
  _EMPTY_ = 0;
  reserved_field = 1;
}

/**
 * Original thrift struct:-
 * UnionToBeRenamed
 */
<<\ThriftTypeInfo(shape('uri' => 'test.dev/fixtures/basic/UnionToBeRenamed'))>>
class MyRenamedUnion implements \IThriftSyncStruct, \IThriftUnion<\fixtures\basic\MyRenamedUnionEnum>, \IThriftShapishSyncStruct {
  use \ThriftUnionSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'reserved_field',
      'union' => true,
      'type' => \TType::I32,
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'reserved_field' => 1,
  ];

  const type TConstructorShape = shape(
    ?'reserved_field' => ?int,
  );

  const type TShape = shape(
    ?'reserved_field' => ?int,
    ...
  );
  const int STRUCTURAL_ID = 9144321583101923955;
  /**
   * Original thrift field:-
   * 1: i32 reserved_field
   */
  public ?int $reserved_field;
  protected \fixtures\basic\MyRenamedUnionEnum $_type = \fixtures\basic\MyRenamedUnionEnum::_EMPTY_;

  public function __construct(?int $reserved_field = null)[] {
    $this->_type = \fixtures\basic\MyRenamedUnionEnum::_EMPTY_;
    if ($reserved_field !== null) {
      $this->reserved_field = $reserved_field;
      $this->_type = \fixtures\basic\MyRenamedUnionEnum::reserved_field;
    }
  }

  public static function withDefaultValues()[]: this {
    return new static();
  }

  public static function fromShape(self::TConstructorShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reserved_field'),
    );
  }

  public function getName()[]: string {
    return 'MyRenamedUnion';
  }

  public function getType()[]: \fixtures\basic\MyRenamedUnionEnum {
    return $this->_type;
  }

  public function reset()[write_props]: void {
    switch ($this->_type) {
      case \fixtures\basic\MyRenamedUnionEnum::reserved_field:
        $this->reserved_field = null;
        break;
      case \fixtures\basic\MyRenamedUnionEnum::_EMPTY_:
        break;
    }
    $this->_type = \fixtures\basic\MyRenamedUnionEnum::_EMPTY_;
  }

  public function set_reserved_field(int $reserved_field)[write_props]: this {
    $this->reset();
    $this->_type = \fixtures\basic\MyRenamedUnionEnum::reserved_field;
    $this->reserved_field = $reserved_field;
    return $this;
  }

  public function get_reserved_field()[]: ?int {
    return $this->reserved_field;
  }

  public function getx_reserved_field()[]: int {
    invariant(
      $this->_type === \fixtures\basic\MyRenamedUnionEnum::reserved_field,
      'get_reserved_field called on an instance of UnionToBeRenamed whose current type is %s',
      (string)$this->_type,
    );
    return $this->reserved_field as nonnull;
  }

  public static function getStructMetadata()[]: \tmeta_ThriftStruct {
    return \tmeta_ThriftStruct::fromShape(
      shape(
        "name" => "module.UnionToBeRenamed",
        "fields" => vec[
          \tmeta_ThriftField::fromShape(
            shape(
              "id" => 1,
              "type" => \tmeta_ThriftType::fromShape(
                shape(
                  "t_primitive" => \tmeta_ThriftPrimitiveType::THRIFT_I32_TYPE,
                )
              ),
              "name" => "reserved_field",
            )
          ),
        ],
        "is_union" => true,
      )
    );
  }

  public static function getAllStructuredAnnotations()[]: \TStructAnnotations {
    return shape(
      'struct' => dict[
        '\facebook\thrift\annotation\Name' => \facebook\thrift\annotation\Name::fromShape(
          shape(
            "name" => "MyRenamedUnion",
          )
        ),
      ],
      'fields' => dict[
        'reserved_field' => shape(
          'field' => dict[
            '\facebook\thrift\annotation\Name' => \facebook\thrift\annotation\Name::fromShape(
              shape(
                "name" => "renamed_field",
              )
            ),
          ],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function __fromShape(self::TShape $shape)[]: this {
    return new static(
      Shapes::idx($shape, 'reserved_field'),
    );
  }

  public function __toShape()[]: self::TShape {
    return shape(
      'reserved_field' => $this->reserved_field,
    );
  }
  public function getInstanceKey()[write_props]: string {
    return \TCompactSerializer::serialize($this);
  }

  public function readFromJson(string $jsonText): void {
    $this->_type = \fixtures\basic\UnionToBeRenamedEnum::_EMPTY_;
    $parsed = json_decode($jsonText, true);

    if ($parsed === null || !($parsed is KeyedContainer<_, _>)) {
      throw new \TProtocolException("Cannot parse the given json string.");
    }

    if (idx($parsed, 'reserved_field') !== null) {
      $_tmp0 = (int)/* HH_FIXME[4110] */ $parsed['reserved_field'];
      if ($_tmp0 > 0x7fffffff) {
        throw new \TProtocolException("number exceeds limit in field");
      } else {
        $this->reserved_field = (int)$_tmp0;
      }
      $this->_type = \fixtures\basic\UnionToBeRenamedEnum::reserved_field;
    }
  }

}

