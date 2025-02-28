// Autogenerated by Thrift Compiler (facebook)
// DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
// @generated

package hack

import (
	"bytes"
	"context"
	"sync"
	"fmt"
	thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
	scope0 "thrift/annotation/scope"

)

// (needed to ensure safety because of naive import list construction.)
var _ = thrift.ZERO
var _ = fmt.Printf
var _ = sync.Mutex{}
var _ = bytes.Equal
var _ = context.Background

var _ = scope0.GoUnusedProtection__
var GoUnusedProtection__ int;

// Attributes:
//  - Name
type FieldWrapper struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
}

func NewFieldWrapper() *FieldWrapper {
  return &FieldWrapper{}
}


func (p *FieldWrapper) GetName() string {
  return p.Name
}
type FieldWrapperBuilder struct {
  obj *FieldWrapper
}

func NewFieldWrapperBuilder() *FieldWrapperBuilder{
  return &FieldWrapperBuilder{
    obj: NewFieldWrapper(),
  }
}

func (p FieldWrapperBuilder) Emit() *FieldWrapper{
  return &FieldWrapper{
    Name: p.obj.Name,
  }
}

func (f *FieldWrapperBuilder) Name(name string) *FieldWrapperBuilder {
  f.obj.Name = name
  return f
}

func (f *FieldWrapper) SetName(name string) *FieldWrapper {
  f.Name = name
  return f
}

func (p *FieldWrapper) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *FieldWrapper)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Name = v
  }
  return nil
}

func (p *FieldWrapper) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("FieldWrapper"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *FieldWrapper) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *FieldWrapper) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  return fmt.Sprintf("FieldWrapper({Name:%s})", nameVal)
}

// Attributes:
//  - Name
type Adapter struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
}

func NewAdapter() *Adapter {
  return &Adapter{}
}


func (p *Adapter) GetName() string {
  return p.Name
}
type AdapterBuilder struct {
  obj *Adapter
}

func NewAdapterBuilder() *AdapterBuilder{
  return &AdapterBuilder{
    obj: NewAdapter(),
  }
}

func (p AdapterBuilder) Emit() *Adapter{
  return &Adapter{
    Name: p.obj.Name,
  }
}

func (a *AdapterBuilder) Name(name string) *AdapterBuilder {
  a.obj.Name = name
  return a
}

func (a *Adapter) SetName(name string) *Adapter {
  a.Name = name
  return a
}

func (p *Adapter) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Adapter)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Name = v
  }
  return nil
}

func (p *Adapter) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Adapter"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Adapter) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *Adapter) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  return fmt.Sprintf("Adapter({Name:%s})", nameVal)
}

// Attributes:
//  - Reason
type SkipCodegen struct {
  Reason string `thrift:"reason,1" db:"reason" json:"reason"`
}

func NewSkipCodegen() *SkipCodegen {
  return &SkipCodegen{}
}


func (p *SkipCodegen) GetReason() string {
  return p.Reason
}
type SkipCodegenBuilder struct {
  obj *SkipCodegen
}

func NewSkipCodegenBuilder() *SkipCodegenBuilder{
  return &SkipCodegenBuilder{
    obj: NewSkipCodegen(),
  }
}

func (p SkipCodegenBuilder) Emit() *SkipCodegen{
  return &SkipCodegen{
    Reason: p.obj.Reason,
  }
}

func (s *SkipCodegenBuilder) Reason(reason string) *SkipCodegenBuilder {
  s.obj.Reason = reason
  return s
}

func (s *SkipCodegen) SetReason(reason string) *SkipCodegen {
  s.Reason = reason
  return s
}

func (p *SkipCodegen) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *SkipCodegen)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Reason = v
  }
  return nil
}

func (p *SkipCodegen) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("SkipCodegen"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *SkipCodegen) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("reason", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:reason: ", p), err) }
  if err := oprot.WriteString(string(p.Reason)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.reason (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:reason: ", p), err) }
  return err
}

func (p *SkipCodegen) String() string {
  if p == nil {
    return "<nil>"
  }

  reasonVal := fmt.Sprintf("%v", p.Reason)
  return fmt.Sprintf("SkipCodegen({Reason:%s})", reasonVal)
}

// Attributes:
//  - Name
//  - Reason
type Name struct {
  Name string `thrift:"name,1" db:"name" json:"name"`
  Reason string `thrift:"reason,2" db:"reason" json:"reason"`
}

func NewName() *Name {
  return &Name{}
}


func (p *Name) GetName() string {
  return p.Name
}

func (p *Name) GetReason() string {
  return p.Reason
}
type NameBuilder struct {
  obj *Name
}

func NewNameBuilder() *NameBuilder{
  return &NameBuilder{
    obj: NewName(),
  }
}

func (p NameBuilder) Emit() *Name{
  return &Name{
    Name: p.obj.Name,
    Reason: p.obj.Reason,
  }
}

func (n *NameBuilder) Name(name string) *NameBuilder {
  n.obj.Name = name
  return n
}

func (n *NameBuilder) Reason(reason string) *NameBuilder {
  n.obj.Reason = reason
  return n
}

func (n *Name) SetName(name string) *Name {
  n.Name = name
  return n
}

func (n *Name) SetReason(reason string) *Name {
  n.Reason = reason
  return n
}

func (p *Name) Read(iprot thrift.Protocol) error {
  if _, err := iprot.ReadStructBegin(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read error: ", p), err)
  }


  for {
    _, fieldTypeId, fieldId, err := iprot.ReadFieldBegin()
    if err != nil {
      return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", p, fieldId), err)
    }
    if fieldTypeId == thrift.STOP { break; }
    switch fieldId {
    case 1:
      if err := p.ReadField1(iprot); err != nil {
        return err
      }
    case 2:
      if err := p.ReadField2(iprot); err != nil {
        return err
      }
    default:
      if err := iprot.Skip(fieldTypeId); err != nil {
        return err
      }
    }
    if err := iprot.ReadFieldEnd(); err != nil {
      return err
    }
  }
  if err := iprot.ReadStructEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", p), err)
  }
  return nil
}

func (p *Name)  ReadField1(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 1: ", err)
  } else {
    p.Name = v
  }
  return nil
}

func (p *Name)  ReadField2(iprot thrift.Protocol) error {
  if v, err := iprot.ReadString(); err != nil {
    return thrift.PrependError("error reading field 2: ", err)
  } else {
    p.Reason = v
  }
  return nil
}

func (p *Name) Write(oprot thrift.Protocol) error {
  if err := oprot.WriteStructBegin("Name"); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", p), err) }
  if err := p.writeField1(oprot); err != nil { return err }
  if err := p.writeField2(oprot); err != nil { return err }
  if err := oprot.WriteFieldStop(); err != nil {
    return thrift.PrependError("write field stop error: ", err) }
  if err := oprot.WriteStructEnd(); err != nil {
    return thrift.PrependError("write struct stop error: ", err) }
  return nil
}

func (p *Name) writeField1(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("name", thrift.STRING, 1); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 1:name: ", p), err) }
  if err := oprot.WriteString(string(p.Name)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.name (1) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 1:name: ", p), err) }
  return err
}

func (p *Name) writeField2(oprot thrift.Protocol) (err error) {
  if err := oprot.WriteFieldBegin("reason", thrift.STRING, 2); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field begin error 2:reason: ", p), err) }
  if err := oprot.WriteString(string(p.Reason)); err != nil {
  return thrift.PrependError(fmt.Sprintf("%T.reason (2) field write error: ", p), err) }
  if err := oprot.WriteFieldEnd(); err != nil {
    return thrift.PrependError(fmt.Sprintf("%T write field end error 2:reason: ", p), err) }
  return err
}

func (p *Name) String() string {
  if p == nil {
    return "<nil>"
  }

  nameVal := fmt.Sprintf("%v", p.Name)
  reasonVal := fmt.Sprintf("%v", p.Reason)
  return fmt.Sprintf("Name({Name:%s Reason:%s})", nameVal, reasonVal)
}

