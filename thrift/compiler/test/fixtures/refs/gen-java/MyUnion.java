/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import com.facebook.thrift.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial", "unchecked" })
public class MyUnion extends TUnion<MyUnion> implements Comparable<MyUnion> {
  public static boolean DEFAULT_PRETTY_PRINT = true;
  private static final TStruct STRUCT_DESC = new TStruct("MyUnion");
  private static final TField AN_INTEGER_FIELD_DESC = new TField("anInteger", TType.I32, (short)1);
  private static final TField A_STRING_FIELD_DESC = new TField("aString", TType.STRING, (short)2);

  public static final int ANINTEGER = 1;
  public static final int ASTRING = 2;

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(ANINTEGER, new FieldMetaData("anInteger", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.I32)));
    tmpMetaDataMap.put(ASTRING, new FieldMetaData("aString", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  public MyUnion() {
    super();
  }

  public MyUnion(int setField, Object value) {
    super(setField, value);
  }

  public MyUnion(MyUnion other) {
    super(other);
  }
  public MyUnion deepCopy() {
    return new MyUnion(this);
  }

  public static MyUnion anInteger(int value) {
    MyUnion x = new MyUnion();
    x.setAnInteger(value);
    return x;
  }

  public static MyUnion aString(String value) {
    MyUnion x = new MyUnion();
    x.setAString(value);
    return x;
  }


  @Override
  protected void checkType(short setField, Object value) throws ClassCastException {
    switch (setField) {
      case ANINTEGER:
        if (value instanceof Integer) {
          break;
        }
        throw new ClassCastException("Was expecting value of type Integer for field 'anInteger', but got " + value.getClass().getSimpleName());
      case ASTRING:
        if (value instanceof String) {
          break;
        }
        throw new ClassCastException("Was expecting value of type String for field 'aString', but got " + value.getClass().getSimpleName());
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  public void read(TProtocol iprot) throws TException {
    setField_ = 0;
    value_ = null;
    iprot.readStructBegin(metaDataMap);
    TField field = iprot.readFieldBegin();
    if (field.type != TType.STOP)
    {
      value_ = readValue(iprot, field);
      if (value_ != null)
      {
        switch (field.id) {
          case ANINTEGER:
            if (field.type == AN_INTEGER_FIELD_DESC.type) {
              setField_ = field.id;
            }
            break;
          case ASTRING:
            if (field.type == A_STRING_FIELD_DESC.type) {
              setField_ = field.id;
            }
            break;
        }
      }
      iprot.readFieldEnd();
      iprot.readFieldBegin();
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();
  }

  @Override
  protected Object readValue(TProtocol iprot, TField field) throws TException {
    switch (field.id) {
      case ANINTEGER:
        if (field.type == AN_INTEGER_FIELD_DESC.type) {
          Integer anInteger;
          anInteger = iprot.readI32();
          return anInteger;
        } else {
          TProtocolUtil.skip(iprot, field.type);
          return null;
        }
      case ASTRING:
        if (field.type == A_STRING_FIELD_DESC.type) {
          String aString;
          aString = iprot.readString();
          return aString;
        } else {
          TProtocolUtil.skip(iprot, field.type);
          return null;
        }
      default:
        TProtocolUtil.skip(iprot, field.type);
        return null;
    }
  }

  @Override
  protected void writeValue(TProtocol oprot, short setField, Object value) throws TException {
    switch (setField) {
      case ANINTEGER:
        Integer anInteger = (Integer)getFieldValue();
        oprot.writeI32(anInteger);
        return;
      case ASTRING:
        String aString = (String)getFieldValue();
        oprot.writeString(aString);
        return;
      default:
        throw new IllegalStateException("Cannot write union with unknown field " + setField);
    }
  }

  @Override
  protected TField getFieldDesc(int setField) {
    switch (setField) {
      case ANINTEGER:
        return AN_INTEGER_FIELD_DESC;
      case ASTRING:
        return A_STRING_FIELD_DESC;
      default:
        throw new IllegalArgumentException("Unknown field id " + setField);
    }
  }

  @Override
  protected TStruct getStructDesc() {
    return STRUCT_DESC;
  }

  public int getAnInteger() {
    if (getSetField() == ANINTEGER) {
      return (Integer)getFieldValue();
    } else {
      throw new RuntimeException("Cannot get field 'anInteger' because union is currently set to " + getFieldDesc(getSetField()).name);
    }
  }

  public void setAnInteger(int value) {
    setField_ = ANINTEGER;
    value_ = value;
  }

  public String getAString() {
    if (getSetField() == ASTRING) {
      return (String)getFieldValue();
    } else {
      throw new RuntimeException("Cannot get field 'aString' because union is currently set to " + getFieldDesc(getSetField()).name);
    }
  }

  public void setAString(String value) {
    if (value == null) throw new NullPointerException();
    setField_ = ASTRING;
    value_ = value;
  }

  public boolean equals(Object other) {
    if (other instanceof MyUnion) {
      return equals((MyUnion)other);
    } else {
      return false;
    }
  }

  public boolean equals(MyUnion other) {
    return equalsNobinaryImpl(other);
  }

  @Override
  public int compareTo(MyUnion other) {
    return compareToImpl(other);
  }


  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public String toString() {
    return toString(DEFAULT_PRETTY_PRINT);
  }

  @Override
  public String toString(boolean prettyPrint) {
    return toString(1, prettyPrint);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("MyUnion");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    // Only print this field if it is the set field
    if (getSetField() == ANINTEGER)
    {
      sb.append(indentStr);
      sb.append("anInteger");
      sb.append(space);
      sb.append(":").append(space);
      sb.append(TBaseHelper.toString(this.getAnInteger(), indent + 1, prettyPrint));
      first = false;
    }
    // Only print this field if it is the set field
    if (getSetField() == ASTRING)
    {
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("aString");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getAString() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getAString(), indent + 1, prettyPrint));
      }
      first = false;
    }
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }


}
