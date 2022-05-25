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
@com.facebook.swift.codec.ThriftStruct(value="MyStructField21Patch", builder=MyStructField21Patch.Builder.class)
public final class MyStructField21Patch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public MyStructField21Patch(
        @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL) final List<Short> assign,
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE) final boolean clear,
        @com.facebook.swift.codec.ThriftField(value=4, name="prepend", requiredness=Requiredness.NONE) final List<Short> prepend,
        @com.facebook.swift.codec.ThriftField(value=5, name="append", requiredness=Requiredness.NONE) final List<Short> append
    ) {
        this.assign = assign;
        this.clear = clear;
        this.prepend = prepend;
        this.append = append;
    }
    
    @ThriftConstructor
    protected MyStructField21Patch() {
      this.assign = null;
      this.clear = false;
      this.prepend = null;
      this.append = null;
    }
    
    public static class Builder {
    
        private List<Short> assign = null;
        private boolean clear = false;
        private List<Short> prepend = null;
        private List<Short> append = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL)
        public Builder setAssign(List<Short> assign) {
            this.assign = assign;
            return this;
        }
    
        public List<Short> getAssign() { return assign; }
    
            @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
        public Builder setClear(boolean clear) {
            this.clear = clear;
            return this;
        }
    
        public boolean isClear() { return clear; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="prepend", requiredness=Requiredness.NONE)
        public Builder setPrepend(List<Short> prepend) {
            this.prepend = prepend;
            return this;
        }
    
        public List<Short> getPrepend() { return prepend; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="append", requiredness=Requiredness.NONE)
        public Builder setAppend(List<Short> append) {
            this.append = append;
            return this;
        }
    
        public List<Short> getAppend() { return append; }
    
        public Builder() { }
        public Builder(MyStructField21Patch other) {
            this.assign = other.assign;
            this.clear = other.clear;
            this.prepend = other.prepend;
            this.append = other.append;
        }
    
        @ThriftConstructor
        public MyStructField21Patch build() {
            MyStructField21Patch result = new MyStructField21Patch (
                this.assign,
                this.clear,
                this.prepend,
                this.append
            );
            return result;
        }
    }
                    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("MyStructField21Patch");
    private final List<Short> assign;
    public static final int _ASSIGN = 1;
    private static final TField ASSIGN_FIELD_DESC = new TField("assign", TType.LIST, (short)1);
        private final boolean clear;
    public static final int _CLEAR = 2;
    private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
        private final List<Short> prepend;
    public static final int _PREPEND = 4;
    private static final TField PREPEND_FIELD_DESC = new TField("prepend", TType.LIST, (short)4);
        private final List<Short> append;
    public static final int _APPEND = 5;
    private static final TField APPEND_FIELD_DESC = new TField("append", TType.LIST, (short)5);
    static {
      NAMES_TO_IDS.put("assign", 1);
      THRIFT_NAMES_TO_IDS.put("assign", 1);
      FIELD_METADATA.put(1, ASSIGN_FIELD_DESC);
      NAMES_TO_IDS.put("clear", 2);
      THRIFT_NAMES_TO_IDS.put("clear", 2);
      FIELD_METADATA.put(2, CLEAR_FIELD_DESC);
      NAMES_TO_IDS.put("prepend", 4);
      THRIFT_NAMES_TO_IDS.put("prepend", 4);
      FIELD_METADATA.put(4, PREPEND_FIELD_DESC);
      NAMES_TO_IDS.put("append", 5);
      THRIFT_NAMES_TO_IDS.put("append", 5);
      FIELD_METADATA.put(5, APPEND_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/MyStructField21Patch"), 
        MyStructField21Patch.class, MyStructField21Patch::read0));
    }
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="assign", requiredness=Requiredness.OPTIONAL)
    public List<Short> getAssign() { return assign; }
    
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
    public boolean isClear() { return clear; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="prepend", requiredness=Requiredness.NONE)
    public List<Short> getPrepend() { return prepend; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="append", requiredness=Requiredness.NONE)
    public List<Short> getAppend() { return append; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("assign", assign);
        helper.add("clear", clear);
        helper.add("prepend", prepend);
        helper.add("append", append);
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
    
        MyStructField21Patch other = (MyStructField21Patch)o;
    
        return
            Objects.equals(assign, other.assign) &&
    Objects.equals(clear, other.clear) &&
    Objects.equals(prepend, other.prepend) &&
    Objects.equals(append, other.append) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            assign,
            clear,
            prepend,
            append
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<MyStructField21Patch> asReader() {
      return MyStructField21Patch::read0;
    }
    
    public static MyStructField21Patch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(MyStructField21Patch.NAMES_TO_IDS, MyStructField21Patch.THRIFT_NAMES_TO_IDS, MyStructField21Patch.FIELD_METADATA);
      MyStructField21Patch.Builder builder = new MyStructField21Patch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _ASSIGN:
          if (__field.type == TType.LIST) {
            List<Short> assign;
            {
            TList _list = oprot.readListBegin();
            assign = new ArrayList<Short>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                short _value1 = oprot.readI16();
                assign.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setAssign(assign);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _CLEAR:
          if (__field.type == TType.BOOL) {
            boolean clear = oprot.readBool();
            builder.setClear(clear);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PREPEND:
          if (__field.type == TType.LIST) {
            List<Short> prepend;
            {
            TList _list = oprot.readListBegin();
            prepend = new ArrayList<Short>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                short _value1 = oprot.readI16();
                prepend.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setPrepend(prepend);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _APPEND:
          if (__field.type == TType.LIST) {
            List<Short> append;
            {
            TList _list = oprot.readListBegin();
            append = new ArrayList<Short>(Math.max(0, _list.size));
            for (int _i = 0; (_list.size < 0) ? oprot.peekList() : (_i < _list.size); _i++) {
                
                short _value1 = oprot.readI16();
                append.add(_value1);
            }
            oprot.readListEnd();
            }
            builder.setAppend(append);
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
      if (this.assign != null) {
        oprot.writeFieldBegin(ASSIGN_FIELD_DESC);
        List<Short> _iter0 = this.assign;
        oprot.writeListBegin(new TList(TType.I16, _iter0.size()));
        for (short _iter1 : _iter0) {
          oprot.writeI16(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
      if (this.prepend != null) {
        oprot.writeFieldBegin(PREPEND_FIELD_DESC);
        List<Short> _iter0 = this.prepend;
        oprot.writeListBegin(new TList(TType.I16, _iter0.size()));
        for (short _iter1 : _iter0) {
          oprot.writeI16(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      if (this.append != null) {
        oprot.writeFieldBegin(APPEND_FIELD_DESC);
        List<Short> _iter0 = this.append;
        oprot.writeListBegin(new TList(TType.I16, _iter0.size()));
        for (short _iter1 : _iter0) {
          oprot.writeI16(_iter1);
        }
        oprot.writeListEnd();
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _MyStructField21PatchLazy {
        private static final MyStructField21Patch _DEFAULT = new MyStructField21Patch.Builder().build();
    }
    
    public static MyStructField21Patch defaultInstance() {
        return  _MyStructField21PatchLazy._DEFAULT;
    }
}
