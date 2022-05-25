/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="MyUnionPatch", builder=MyUnionPatch.Builder.class)
public final class MyUnionPatch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public MyUnionPatch(
        @com.facebook.swift.codec.ThriftField(value=1, name="option1", requiredness=Requiredness.NONE) final com.facebook.thrift.op.StringPatch option1,
        @com.facebook.swift.codec.ThriftField(value=2, name="option2", requiredness=Requiredness.NONE) final com.facebook.thrift.op.I32Patch option2
    ) {
        this.option1 = option1;
        this.option2 = option2;
    }
    
    @ThriftConstructor
    protected MyUnionPatch() {
      this.option1 = null;
      this.option2 = null;
    }
    
    public static class Builder {
    
        private com.facebook.thrift.op.StringPatch option1 = null;
        private com.facebook.thrift.op.I32Patch option2 = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="option1", requiredness=Requiredness.NONE)
        public Builder setOption1(com.facebook.thrift.op.StringPatch option1) {
            this.option1 = option1;
            return this;
        }
    
        public com.facebook.thrift.op.StringPatch getOption1() { return option1; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="option2", requiredness=Requiredness.NONE)
        public Builder setOption2(com.facebook.thrift.op.I32Patch option2) {
            this.option2 = option2;
            return this;
        }
    
        public com.facebook.thrift.op.I32Patch getOption2() { return option2; }
    
        public Builder() { }
        public Builder(MyUnionPatch other) {
            this.option1 = other.option1;
            this.option2 = other.option2;
        }
    
        @ThriftConstructor
        public MyUnionPatch build() {
            MyUnionPatch result = new MyUnionPatch (
                this.option1,
                this.option2
            );
            return result;
        }
    }
            public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyUnionPatch");
    private final com.facebook.thrift.op.StringPatch option1;
    public static final int _OPTION1 = 1;
    private static final TField OPTION1_FIELD_DESC = new TField("option1", TType.STRUCT, (short)1);
        private final com.facebook.thrift.op.I32Patch option2;
    public static final int _OPTION2 = 2;
    private static final TField OPTION2_FIELD_DESC = new TField("option2", TType.STRUCT, (short)2);
    static {
      NAMES_TO_IDS.put("option1", 1);
      THRIFT_NAMES_TO_IDS.put("option1", 1);
      FIELD_METADATA.put(1, OPTION1_FIELD_DESC);
      NAMES_TO_IDS.put("option2", 2);
      THRIFT_NAMES_TO_IDS.put("option2", 2);
      FIELD_METADATA.put(2, OPTION2_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/MyUnionPatch"), 
        MyUnionPatch.class, MyUnionPatch::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="option1", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.StringPatch getOption1() { return option1; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=2, name="option2", requiredness=Requiredness.NONE)
    public com.facebook.thrift.op.I32Patch getOption2() { return option2; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("option1", option1);
        helper.add("option2", option2);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        MyUnionPatch other = (MyUnionPatch)o;
    
        return
            Objects.equals(option1, other.option1) &&
    Objects.equals(option2, other.option2) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            option1,
            option2
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<MyUnionPatch> asReader() {
      return MyUnionPatch::read0;
    }
    
    public static MyUnionPatch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyUnionPatch.NAMES_TO_IDS, MyUnionPatch.THRIFT_NAMES_TO_IDS, MyUnionPatch.FIELD_METADATA);
      MyUnionPatch.Builder builder = new MyUnionPatch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _OPTION1:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.StringPatch option1 = com.facebook.thrift.op.StringPatch.read0(oprot);
            builder.setOption1(option1);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _OPTION2:
          if (__field.type == TType.STRUCT) {
            com.facebook.thrift.op.I32Patch option2 = com.facebook.thrift.op.I32Patch.read0(oprot);
            builder.setOption2(option2);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (this.option1 != null) {
        oprot.writeFieldBegin(OPTION1_FIELD_DESC);
        this.option1.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.option2 != null) {
        oprot.writeFieldBegin(OPTION2_FIELD_DESC);
        this.option2.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _MyUnionPatchLazy {
        private static final MyUnionPatch _DEFAULT = new MyUnionPatch.Builder().build();
    }
    
    public static MyUnionPatch defaultInstance() {
        return  _MyUnionPatchLazy._DEFAULT;
    }
}
