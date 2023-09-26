typedef=alpha;
module template_example;

struct StructC {
  asdf: TemplateData;
  zxcv: i32;
  jkl: i32;
};

struct TemplateData {
  name: str;
  has_name: bool;
  name2: str;
  has_name2: bool;
  someVec: vector<i32>;
  someMap: map<str, str>;
  structC: StructC;
};

template PrintTemplateData(t: TemplateData) t#"
  here's an if:
  <if t.has_name>
    yo name: <t.name>
  <elif t.has_name2>
    hi name2: <t.name2>
  <else>
    neither name or name2.
  </if>

  here's a for statement over a vector:
  <for i in t.someVec>
    for value number: <i>
  </for>

  here's a for statement over a map:
  <for key, val in t.someMap>
    <key> -> <val>
  </for>
"#

variant SomeVariant {
  a_string: str;
  b_int: i32;
  c_char: char;
}

template DoSomeVariant(v: SomeVariant) t#"
  <switch v>
   <case v.a_string> </case>
   <case v.b_int> </case>
   <default> </default>
  </switch>
"#
