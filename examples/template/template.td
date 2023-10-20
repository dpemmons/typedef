typedef=alpha;
module template_example;

struct StructC {
  asdf: TemplateData;
  zxcv: i32;
  jkl: i32;
};

template PrintStructC(sc: StructC) t"
StructC contains:
zxcv: <sc.zxcv>
jkl: <sc.jkl>
"

// A struct containing some fields.
struct TemplateData {
  name: str;
  has_name: bool;
  name2: str;
  has_name2: bool;
  someVec: vector<i32>;
  someMap: map<str, str>;
  structC: StructC;
};

/*************************************************************
 * This is a "string template function". It takes one or more
 * named typedef types as arguments, follows the logic
 * enclosed within angle brackets <> and returns a rendered
 * string. 
 *************************************************************/
template PrintTemplateData(t: TemplateData) t"
  Print either name or name2, or neither:
  <if t.has_name>name: <t.name>
  <elif t.has_name2>name2: <t.name2>
  <else>neither name or name2.
  </if>

  Iterate over a vector:
  <for i in t.someVec>for value number: <i>
  </for>

  Iterate over an unordered map:
  <for key, val in t.someMap><key> -> <val>
  </for>
  
  Call another string template \"PrintStructC\":
  <PrintStructC(t.structC)>
"

// Typedef has "variants" which are like tagged unions
// in other languages.
variant SomeVariant {
  a_string: str;
  b_int: i32;
  c_char: char;
  d_struct: StructC;
}

template DoSomeVariant(v: SomeVariant) t"
  Switch statement example:
  <switch v>
   <case v.a_string>It's a string: <v.a_string></case>
   <case v.b_int>It's an int: <v.b_int></case>
   <case v.d_struct>It's a struct: <PrintStructC(v.d_struct)></case>
   <default>It's the default!</default>
  </switch>
"

template LoopLogic(v: vector<str>) t"
  LoopLogic:
  <for i in v>
  <if IsFirst()>
  This is the first one: <i>
  <elif IsLast()>
  This is the last one: <i>
  <else>
  This is the middle: <i>
  </if>
  </for>
"

template BooleanLogic(v: vector<str>) t"
  BooleanLogic:
  <for i in v>
  <i>
  <if !IsFirst()>This is not the first one.</if>
  <if !IsLast()>This is not the last one.</if>
  </for>
"

template TestIsEmpty(v: vector<str>) t"v is <if !IsEmpty(v)> not </if> empty."

template PrintIndices(v: vector<str>) t"
  <for i in v>
  i0: <Index0()> i1: <Index1()> \"<i>\"
  </for>
  <Literal()>
"

template Literal() t"Hello world from a literal template."

template PrintTheHellos(a: str, b:str) t"
First one: <a>
Second one: <b>
"
template SayHi() t"Hello World!"
template ATemplateThatCallsAnotherWithYetOthersAsArguments() t"
  <PrintTheHellos(Literal(), SayHi())>
"
