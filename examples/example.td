typedef = 0.0.1;
module TestModule::ModuleA;

import TestModule::ModuleB::thisThing;
import TestModule::ModuleB::something;
import TestModule::ModuleB::*;

enum TestEnum: uint8 {
  EnumValueA = 0,
  EnumValueB = 1,
};

message TestMessage {
  //__next = 24; // optional

  // Scalar types:
  // 8 bit:
  valueBool: bool @0 = true;
  
  valueByte: int8 @1 =-6;
  valueUByte: uint8 @2 = 5;
  valueInt8: int8 @3 = -7;
  valueUint8: uint8 @4 = 8;

  // 16 bit:
  valueInt16: int16 @5 = -700;
  valueUint16: uint16 @6 = 800;

  // 32 bit:
  valueInt32: int32 @8 =-90000;
  valueUint32: uint32 @9 = 60000;
  valueFloat32: float32 @10 = 3.14;

  // 64 bit:
  valueInt64: int64 @11 = -7000000000;
  valueUint64: uint64 @12 = 8000000000;
  valueFloat64: float64 @13 = 3.1415;

  //  valueFixedArray: int[4] @20 = [1,2,3,4];
  //
  //  valueArray: byte[] @21 = ['a','b',];
  //
  //  valueString: string @22 = "a string";
  //  valueStringNoDefault: string @23;
  //
  //  valueObject: SomeObject @24;
  //
  //  valueEnum: TestEnum @25 = EnumValueA;
  //
  //  valueObjectDefault: SomeObject2 @ 26 = {
  //    someValue: 2,
  //    someOtherValue: 3.12
  //  };
  //
  //  valueHex: uint8 @27 = 0x123456789aD;
  //
  //  // bit field?

};
