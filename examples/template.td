typedef=alpha;
module template_example;

struct StructC {
  asdf: StructA;
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

template DoIt(t: TemplateData) t#"
  here's an if:
  <if name>
    yo name: <name>
  <else if name>
    should not get here.
  <else if name2>
    hi name2: <name2>
  <else>
    we're in the else block.
  </if>

  here's a for statement over a vector:
  <for i in someVec>
    for value number: <i>
  </for>

  here's a for statement over a map:
  <for key, val in someMap>
    <key> -> <val>
  </for>

  calling another template (in the same scope) with structC as an argument:
  <tmpl_structC(structC)>

  "#;