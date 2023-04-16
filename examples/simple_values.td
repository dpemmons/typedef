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

val = 88u16;
val2 = 2_147_483_647;
val3 = 2_147_483_64;


// ValB : char = '\u{1F600}'; // Smiling Face with Smiling Eyes
// ValC : char = '🔥';
// ValD : str = "hello \
// world";
// ValE : str = "Hello,\n \u{01F600}!";
// VAL : str = "hello";
// ValRaw : str = r#"
// 👋 Hello world, oh how you spin!
// 🌍 A place of wonder, let the journey begin.
// 💻 Code and keystrokes, a language we share.
// 👨‍💻 Together we create, a world beyond compare.
// "#;
// 
// ValArr: array<i32, 3> = "";