typedef=alpha;
module template_example;

struct StructC {
  asdf: TemplateData;
  zxcv: i32;
  jkl: i32;
};

struct TemplateData {
  name: str;
  name2: str;
  someVec: vector<i32>;
  someMap: map<str, str>;
  structC: StructC;
};

template PrintTemplateData(t: TemplateData) t#"
  here's an if:
  <if t.name>
    yo name: <t.name>
  <elif t.name2>
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
}

template DoSomeVariant(v: SomeVariant) t#"

"#
