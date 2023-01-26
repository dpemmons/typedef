module TestModule.ModuleA;

import TestModule.ModuleB.thisThing;
import TestModule.ModuleB.something as somethingElse;
import TestModule.ModuleB.*;

enum TestEnum: uint8 {
  EnumValueA = 0,
  EnumValueB = 1,
};

message TestMessage {
  //__next = 24; // optional

  // Scalar types:
  // 8 bit: byte (int8), ubyte (uint8), bool

  valueBool: bool @0 = true;
  
  valueByte: int8 @1 =-6;
  valueUByte: uint8 @2 = 5;
  valueInt8: int8 @3 = -7;
  valueUint8: uint8 @4 = 8;

  // 16 bit: short (int16), ushort (uint16)

  valueShort: short @5 = -600;
  valueUShort: ushort @6 = 500;
  valueInt16: int16 @7 = -700;
  valueUint16: uint16 @8 = 800;

  // 32 bit: int (int32), uint (uint32), float (float32)

  valueInt: int @8 =-80000;
  valueUint: uint @9 =70000;
  valueInt32: int32 @10 =-90000;
  valueUint32: uint32 @11 = 60000;

  valueFloat: float @12 = 3.14;
  valueFloat32: float32 @13 = 3.14;

  // 64 bit: long (int64), ulong (uint64), double (float64)

  valueLong: long @14 = -6000000000;
  valueUlong: ulong @15 = 5000000000;
  valueInt64: int64 @16 = -7000000000;
  valueUint64: uint64 @17 = 8000000000;

  valueDouble: double @18 = 3.1415;
  valueFloat64: float64 @19 = 3.1415;

  valueFixedArray: int[4] @20 = [1,2,3,4];

  valueArray: byte[] @21 = ['a','b',];

  valueString: string @22 = "a string";
  valueStringNoDefault: string @23;

  valueObject: SomeObject @24;

  valueEnum: TestEnum @25 = EnumValueA;

  valueObjectDefault: SomeObject2 @ 26 = {
    someValue: 2,
    someOtherValue: 3.12
  };

  valueHex: uint8 @27 = 0x123456789aD;

  // bit field?

};
