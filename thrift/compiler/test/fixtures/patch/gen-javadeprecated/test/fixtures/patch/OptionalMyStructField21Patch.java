/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package test.fixtures.patch;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class OptionalMyStructField21Patch implements TBase, java.io.Serializable, Cloneable, Comparable<OptionalMyStructField21Patch> {
  private static final TStruct STRUCT_DESC = new TStruct("OptionalMyStructField21Patch");
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.LIST, (short)4);
  private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)5);

  /**
   * Clears any set value. Applies first.
   */
  public boolean clear;
  /**
   * Patches any set value. Applies second.
   */
  public MyStructField21Patch patch;
  /**
   * Assigns the value, if not already set. Applies third.
   */
  public List<Short> ensure;
  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public MyStructField21Patch patchAfter;
  public static final int CLEAR = 2;
  public static final int PATCH = 3;
  public static final int ENSURE = 4;
  public static final int PATCHAFTER = 5;

  // isset id assignments
  private static final int __CLEAR_ISSET_ID = 0;
  private BitSet __isset_bit_vector = new BitSet(1);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(CLEAR, new FieldMetaData("clear", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.BOOL)));
    tmpMetaDataMap.put(PATCH, new FieldMetaData("patch", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructField21Patch.class)));
    tmpMetaDataMap.put(ENSURE, new FieldMetaData("ensure", TFieldRequirementType.OPTIONAL, 
        new ListMetaData(TType.LIST, 
            new FieldValueMetaData(TType.I16))));
    tmpMetaDataMap.put(PATCHAFTER, new FieldMetaData("patchAfter", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, MyStructField21Patch.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(OptionalMyStructField21Patch.class, metaDataMap);
  }

  public OptionalMyStructField21Patch() {
  }

  public OptionalMyStructField21Patch(
      boolean clear,
      MyStructField21Patch patch,
      MyStructField21Patch patchAfter) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patch = patch;
    this.patchAfter = patchAfter;
  }

  public OptionalMyStructField21Patch(
      boolean clear,
      MyStructField21Patch patch,
      List<Short> ensure,
      MyStructField21Patch patchAfter) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patch = patch;
    this.ensure = ensure;
    this.patchAfter = patchAfter;
  }

  public static class Builder {
    private boolean clear;
    private MyStructField21Patch patch;
    private List<Short> ensure;
    private MyStructField21Patch patchAfter;

    BitSet __optional_isset = new BitSet(1);

    public Builder() {
    }

    public Builder setClear(final boolean clear) {
      this.clear = clear;
      __optional_isset.set(__CLEAR_ISSET_ID, true);
      return this;
    }

    public Builder setPatch(final MyStructField21Patch patch) {
      this.patch = patch;
      return this;
    }

    public Builder setEnsure(final List<Short> ensure) {
      this.ensure = ensure;
      return this;
    }

    public Builder setPatchAfter(final MyStructField21Patch patchAfter) {
      this.patchAfter = patchAfter;
      return this;
    }

    public OptionalMyStructField21Patch build() {
      OptionalMyStructField21Patch result = new OptionalMyStructField21Patch();
      if (__optional_isset.get(__CLEAR_ISSET_ID)) {
        result.setClear(this.clear);
      }
      result.setPatch(this.patch);
      result.setEnsure(this.ensure);
      result.setPatchAfter(this.patchAfter);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public OptionalMyStructField21Patch(OptionalMyStructField21Patch other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.clear = TBaseHelper.deepCopy(other.clear);
    if (other.isSetPatch()) {
      this.patch = TBaseHelper.deepCopy(other.patch);
    }
    if (other.isSetEnsure()) {
      this.ensure = TBaseHelper.deepCopy(other.ensure);
    }
    if (other.isSetPatchAfter()) {
      this.patchAfter = TBaseHelper.deepCopy(other.patchAfter);
    }
  }

  public OptionalMyStructField21Patch deepCopy() {
    return new OptionalMyStructField21Patch(this);
  }

  /**
   * Clears any set value. Applies first.
   */
  public boolean isClear() {
    return this.clear;
  }

  /**
   * Clears any set value. Applies first.
   */
  public OptionalMyStructField21Patch setClear(boolean clear) {
    this.clear = clear;
    setClearIsSet(true);
    return this;
  }

  public void unsetClear() {
    __isset_bit_vector.clear(__CLEAR_ISSET_ID);
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return __isset_bit_vector.get(__CLEAR_ISSET_ID);
  }

  public void setClearIsSet(boolean __value) {
    __isset_bit_vector.set(__CLEAR_ISSET_ID, __value);
  }

  /**
   * Patches any set value. Applies second.
   */
  public MyStructField21Patch getPatch() {
    return this.patch;
  }

  /**
   * Patches any set value. Applies second.
   */
  public OptionalMyStructField21Patch setPatch(MyStructField21Patch patch) {
    this.patch = patch;
    return this;
  }

  public void unsetPatch() {
    this.patch = null;
  }

  // Returns true if field patch is set (has been assigned a value) and false otherwise
  public boolean isSetPatch() {
    return this.patch != null;
  }

  public void setPatchIsSet(boolean __value) {
    if (!__value) {
      this.patch = null;
    }
  }

  /**
   * Assigns the value, if not already set. Applies third.
   */
  public List<Short> getEnsure() {
    return this.ensure;
  }

  /**
   * Assigns the value, if not already set. Applies third.
   */
  public OptionalMyStructField21Patch setEnsure(List<Short> ensure) {
    this.ensure = ensure;
    return this;
  }

  public void unsetEnsure() {
    this.ensure = null;
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return this.ensure != null;
  }

  public void setEnsureIsSet(boolean __value) {
    if (!__value) {
      this.ensure = null;
    }
  }

  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public MyStructField21Patch getPatchAfter() {
    return this.patchAfter;
  }

  /**
   * Patches any set value, including newly set values. Applies fourth.
   */
  public OptionalMyStructField21Patch setPatchAfter(MyStructField21Patch patchAfter) {
    this.patchAfter = patchAfter;
    return this;
  }

  public void unsetPatchAfter() {
    this.patchAfter = null;
  }

  // Returns true if field patchAfter is set (has been assigned a value) and false otherwise
  public boolean isSetPatchAfter() {
    return this.patchAfter != null;
  }

  public void setPatchAfterIsSet(boolean __value) {
    if (!__value) {
      this.patchAfter = null;
    }
  }

  @SuppressWarnings("unchecked")
  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case CLEAR:
      if (__value == null) {
        unsetClear();
      } else {
        setClear((Boolean)__value);
      }
      break;

    case PATCH:
      if (__value == null) {
        unsetPatch();
      } else {
        setPatch((MyStructField21Patch)__value);
      }
      break;

    case ENSURE:
      if (__value == null) {
        unsetEnsure();
      } else {
        setEnsure((List<Short>)__value);
      }
      break;

    case PATCHAFTER:
      if (__value == null) {
        unsetPatchAfter();
      } else {
        setPatchAfter((MyStructField21Patch)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case CLEAR:
      return new Boolean(isClear());

    case PATCH:
      return getPatch();

    case ENSURE:
      return getEnsure();

    case PATCHAFTER:
      return getPatchAfter();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof OptionalMyStructField21Patch))
      return false;
    OptionalMyStructField21Patch that = (OptionalMyStructField21Patch)_that;

    if (!TBaseHelper.equalsNobinary(this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatch(), that.isSetPatch(), this.patch, that.patch)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchAfter(), that.isSetPatchAfter(), this.patchAfter, that.patchAfter)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {clear, patch, ensure, patchAfter});
  }

  @Override
  public int compareTo(OptionalMyStructField21Patch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetClear()).compareTo(other.isSetClear());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(clear, other.clear);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatch()).compareTo(other.isSetPatch());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patch, other.patch);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetEnsure()).compareTo(other.isSetEnsure());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(ensure, other.ensure);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatchAfter()).compareTo(other.isSetPatchAfter());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patchAfter, other.patchAfter);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case CLEAR:
          if (__field.type == TType.BOOL) {
            this.clear = iprot.readBool();
            setClearIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCH:
          if (__field.type == TType.STRUCT) {
            this.patch = new MyStructField21Patch();
            this.patch.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.LIST) {
            {
              TList _list25 = iprot.readListBegin();
              this.ensure = new ArrayList<Short>(Math.max(0, _list25.size));
              for (int _i26 = 0; 
                   (_list25.size < 0) ? iprot.peekList() : (_i26 < _list25.size); 
                   ++_i26)
              {
                short _elem27;
                _elem27 = iprot.readI16();
                this.ensure.add(_elem27);
              }
              iprot.readListEnd();
            }
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            this.patchAfter = new MyStructField21Patch();
            this.patchAfter.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
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
    oprot.writeFieldBegin(CLEAR_FIELD_DESC);
    oprot.writeBool(this.clear);
    oprot.writeFieldEnd();
    if (this.patch != null) {
      oprot.writeFieldBegin(PATCH_FIELD_DESC);
      this.patch.write(oprot);
      oprot.writeFieldEnd();
    }
    if (this.ensure != null) {
      if (isSetEnsure()) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        {
          oprot.writeListBegin(new TList(TType.I16, this.ensure.size()));
          for (short _iter28 : this.ensure)          {
            oprot.writeI16(_iter28);
          }
          oprot.writeListEnd();
        }
        oprot.writeFieldEnd();
      }
    }
    if (this.patchAfter != null) {
      oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
      this.patchAfter.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("OptionalMyStructField21Patch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("clear");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.isClear(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patch");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatch() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatch(), indent + 1, prettyPrint));
    }
    first = false;
    if (isSetEnsure())
    {
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("ensure");
      sb.append(space);
      sb.append(":").append(space);
      if (this.getEnsure() == null) {
        sb.append("null");
      } else {
        sb.append(TBaseHelper.toString(this.getEnsure(), indent + 1, prettyPrint));
      }
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patchAfter");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatchAfter() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatchAfter(), indent + 1, prettyPrint));
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

