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

@SuppressWarnings({ "unused", "serial" })
public class StructWithUnion implements TBase, java.io.Serializable, Cloneable, Comparable<StructWithUnion> {
  private static final TStruct STRUCT_DESC = new TStruct("StructWithUnion");
  private static final TField U_FIELD_DESC = new TField("u", TType.STRUCT, (short)1);
  private static final TField A_DOUBLE_FIELD_DESC = new TField("aDouble", TType.DOUBLE, (short)2);
  private static final TField F_FIELD_DESC = new TField("f", TType.STRUCT, (short)3);

  public MyUnion u;
  public double aDouble;
  public MyField f;
  public static final int U = 1;
  public static final int ADOUBLE = 2;
  public static final int F = 3;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments
  private static final int __ADOUBLE_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(U, new FieldMetaData("u", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyUnion.class)));
    tmpMetaDataMap.put(ADOUBLE, new FieldMetaData("aDouble", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.DOUBLE)));
    tmpMetaDataMap.put(F, new FieldMetaData("f", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyField.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(StructWithUnion.class, metaDataMap);
  }

  public StructWithUnion() {
  }

  public StructWithUnion(
    MyUnion u,
    double aDouble,
    MyField f)
  {
    this();
    this.u = u;
    this.aDouble = aDouble;
    setADoubleIsSet(true);
    this.f = f;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public StructWithUnion(StructWithUnion other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    if (other.isSetU()) {
      this.u = TBaseHelper.deepCopy(other.u);
    }
    this.aDouble = TBaseHelper.deepCopy(other.aDouble);
    if (other.isSetF()) {
      this.f = TBaseHelper.deepCopy(other.f);
    }
  }

  public StructWithUnion deepCopy() {
    return new StructWithUnion(this);
  }

  @Deprecated
  public StructWithUnion clone() {
    return new StructWithUnion(this);
  }

  public MyUnion getU() {
    return this.u;
  }

  public StructWithUnion setU(MyUnion u) {
    this.u = u;
    return this;
  }

  public void unsetU() {
    this.u = null;
  }

  // Returns true if field u is set (has been assigned a value) and false otherwise
  public boolean isSetU() {
    return this.u != null;
  }

  public void setUIsSet(boolean value) {
    if (!value) {
      this.u = null;
    }
  }

  public double getADouble() {
    return this.aDouble;
  }

  public StructWithUnion setADouble(double aDouble) {
    this.aDouble = aDouble;
    setADoubleIsSet(true);
    return this;
  }

  public void unsetADouble() {
    __isset_bit_vector.clear(__ADOUBLE_ISSET_ID);
  }

  // Returns true if field aDouble is set (has been assigned a value) and false otherwise
  public boolean isSetADouble() {
    return __isset_bit_vector.get(__ADOUBLE_ISSET_ID);
  }

  public void setADoubleIsSet(boolean value) {
    __isset_bit_vector.set(__ADOUBLE_ISSET_ID, value);
  }

  public MyField getF() {
    return this.f;
  }

  public StructWithUnion setF(MyField f) {
    this.f = f;
    return this;
  }

  public void unsetF() {
    this.f = null;
  }

  // Returns true if field f is set (has been assigned a value) and false otherwise
  public boolean isSetF() {
    return this.f != null;
  }

  public void setFIsSet(boolean value) {
    if (!value) {
      this.f = null;
    }
  }

  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
    case U:
      if (value == null) {
        unsetU();
      } else {
        setU((MyUnion)value);
      }
      break;

    case ADOUBLE:
      if (value == null) {
        unsetADouble();
      } else {
        setADouble((Double)value);
      }
      break;

    case F:
      if (value == null) {
        unsetF();
      } else {
        setF((MyField)value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case U:
      return getU();

    case ADOUBLE:
      return new Double(getADouble());

    case F:
      return getF();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
    case U:
      return isSetU();
    case ADOUBLE:
      return isSetADouble();
    case F:
      return isSetF();
    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof StructWithUnion)
      return this.equals((StructWithUnion)that);
    return false;
  }

  public boolean equals(StructWithUnion that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_u = true && this.isSetU();
    boolean that_present_u = true && that.isSetU();
    if (this_present_u || that_present_u) {
      if (!(this_present_u && that_present_u))
        return false;
      if (!TBaseHelper.equalsNobinary(this.u, that.u))
        return false;
    }

    boolean this_present_aDouble = true;
    boolean that_present_aDouble = true;
    if (this_present_aDouble || that_present_aDouble) {
      if (!(this_present_aDouble && that_present_aDouble))
        return false;
      if (!TBaseHelper.equalsNobinary(this.aDouble, that.aDouble))
        return false;
    }

    boolean this_present_f = true && this.isSetF();
    boolean that_present_f = true && that.isSetF();
    if (this_present_f || that_present_f) {
      if (!(this_present_f && that_present_f))
        return false;
      if (!TBaseHelper.equalsNobinary(this.f, that.f))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
    return 0;
  }

  @Override
  public int compareTo(StructWithUnion other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetU()).compareTo(other.isSetU());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(u, other.u);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetADouble()).compareTo(other.isSetADouble());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(aDouble, other.aDouble);
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetF()).compareTo(other.isSetF());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(f, other.f);
    if (lastComparison != 0) {
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      field = iprot.readFieldBegin();
      if (field.type == TType.STOP) { 
        break;
      }
      switch (field.id)
      {
        case U:
          if (field.type == TType.STRUCT) {
            this.u = new MyUnion();
            this.u.read(iprot);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case ADOUBLE:
          if (field.type == TType.DOUBLE) {
            this.aDouble = iprot.readDouble();
            setADoubleIsSet(true);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        case F:
          if (field.type == TType.STRUCT) {
            this.f = new MyField();
            this.f.read(iprot);
          } else { 
            TProtocolUtil.skip(iprot, field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    if (this.u != null) {
      oprot.writeFieldBegin(U_FIELD_DESC);
      this.u.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldBegin(A_DOUBLE_FIELD_DESC);
    oprot.writeDouble(this.aDouble);
    oprot.writeFieldEnd();
    if (this.f != null) {
      oprot.writeFieldBegin(F_FIELD_DESC);
      this.f.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
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
    StringBuilder sb = new StringBuilder("StructWithUnion");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("u");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getU() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getU(), indent + 1, prettyPrint));
    }
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("aDouble");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.getADouble(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("f");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getF() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getF(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

