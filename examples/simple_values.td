typedef=alpha;

ValBool : bool = true;
r#ValBool2 : bool = true;

Val_u8 : u8 = 88;
Val_u8_suffix : u8 = 88u8;

Val_u16 : u16 = 88;
Val_u16_suffix : u16 = 88u16;

Val_u32 : u32 = 88;
Val_u32_suffix : u32 = 88u32;

Val_u64 : u64 = 88;
Val_u64_suffix : u64 = 88u64;

val_i32_bare = 2_147_483_647;
val_i32_bare2 = 2_147_483_64;

val_f32 : f32 = 3.14159265;
val_f32_suffix = 3.14_f32;
val_f64 : f64 = 3.141592653589793;
val_f64_suffix = 3.141592653589793_f64;

val_f32_bare = 3.14;

ValB : char = '\u{1F600}'; // Smiling Face with Smiling Eyes
ValC : char = '🔥';
ValD : str = "hello \
world";
ValE : str = "Hello,\n \u{01F600}!";
VAL : str = "hello";
ValRaw : str = r#"
👋 Hello world, oh how you spin!
🌍 A place of wonder, let the journey begin.
💻 Code and keystrokes, a language we share.
👨‍💻 Together we create, a world beyond compare.
"#;

impliedStr = "string";
impliedChar = 'c';

structA: struct {
  sm:i32;
  sm2:i32;
  impliedChar : char = 'c';
};

structB: struct {
  sm:i32;
  sm2:i32;
};



//ValArr: array<i32, 3> = "";