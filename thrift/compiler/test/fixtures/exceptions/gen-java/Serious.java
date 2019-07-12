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
public class Serious extends Exception implements TBase, java.io.Serializable, Cloneable {
  private static final TStruct STRUCT_DESC = new TStruct("Serious");
  private static final TField SONNET_FIELD_DESC = new TField("sonnet", TType.STRING, (short)1);

  public String sonnet;
  public static final int SONNET = 1;
  public static boolean DEFAULT_PRETTY_PRINT = true;

  // isset id assignments

  public static final Map<Integer, FieldMetaData> metaDataMap;
  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(SONNET, new FieldMetaData("sonnet", TFieldRequirementType.OPTIONAL, 
        new FieldValueMetaData(TType.STRING)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(Serious.class, metaDataMap);
  }

  public Serious() {
  }

  public Serious(
    String sonnet)
  {
    this();
    this.sonnet = sonnet;
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public Serious(Serious other) {
    if (other.isSetSonnet()) {
      this.sonnet = TBaseHelper.deepCopy(other.sonnet);
    }
  }

  public Serious deepCopy() {
    return new Serious(this);
  }

  @Deprecated
  public Serious clone() {
    return new Serious(this);
  }

  public String getSonnet() {
    return this.sonnet;
  }

  public Serious setSonnet(String sonnet) {
    this.sonnet = sonnet;
    return this;
  }

  public void unsetSonnet() {
    this.sonnet = null;
  }

  // Returns true if field sonnet is set (has been assigned a value) and false otherwise
  public boolean isSetSonnet() {
    return this.sonnet != null;
  }

  public void setSonnetIsSet(boolean value) {
    if (!value) {
      this.sonnet = null;
    }
  }

  public void setFieldValue(int fieldID, Object value) {
    switch (fieldID) {
    case SONNET:
      if (value == null) {
        unsetSonnet();
      } else {
        setSonnet((String)value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case SONNET:
      return getSonnet();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  // Returns true if field corresponding to fieldID is set (has been assigned a value) and false otherwise
  public boolean isSet(int fieldID) {
    switch (fieldID) {
    case SONNET:
      return isSetSonnet();
    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object that) {
    if (that == null)
      return false;
    if (that instanceof Serious)
      return this.equals((Serious)that);
    return false;
  }

  public boolean equals(Serious that) {
    if (that == null)
      return false;
    if (this == that)
      return true;

    boolean this_present_sonnet = true && this.isSetSonnet();
    boolean that_present_sonnet = true && that.isSetSonnet();
    if (this_present_sonnet || that_present_sonnet) {
      if (!(this_present_sonnet && that_present_sonnet))
        return false;
      if (!TBaseHelper.equalsNobinary(this.sonnet, that.sonnet))
        return false;
    }

    return true;
  }

  @Override
  public int hashCode() {
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
        case SONNET:
          if (field.type == TType.STRING) {
            this.sonnet = iprot.readString();
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
    if (this.sonnet != null) {
      if (isSetSonnet()) {
        oprot.writeFieldBegin(SONNET_FIELD_DESC);
        oprot.writeString(this.sonnet);
        oprot.writeFieldEnd();
      }
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
    StringBuilder sb = new StringBuilder("Serious");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    if (isSetSonnet())
    {
      sb.append(indentStr);
      sb.append("sonnet");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getSonnet() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getSonnet(), indent + 1, prettyPrint));
      }
      first = false;
    }
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

