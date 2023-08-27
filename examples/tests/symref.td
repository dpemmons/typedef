typedef=alpha;
module test;

// This file contains symref examples, but differs from those
// used in tests/symref.cpp for brevity's sake.

struct StructA {
  v: i64;
};
variant VariantA {
  a: i32;
  b: i64;
};
vector VectorA<i32>;
map MapA<i32, str>;


// Struct containing symref'd fields.
struct StructB {
  struct_field: StructA;
  variant_field: VariantA;
  vector_field: VectorA;
  map_field: MapA;
};


// Variant containing symref'd fields.
variant VariantB {
  struct_field: StructA;
  variant_field: VariantA;
  vector_field: VectorA;
  map_field: MapA;
};

// Struct containing nested symref'd fields.
struct StructC {
  struct NestedStructA {
    v: i64;
  };
  variant NestedVariantA {
    a: i32;
    b: i64;
  };
  vector NestedVectorA<i32>;
  map NestedMapA<i32, str>;

  nested_struct_field: NestedStructA;
  nested_variant_field: NestedVariantA;
  nested_vector_field: NestedVectorA;
  nested_map_field: NestedMapA;
};

// Variant containing nested symref'd fields.
variant VariantC {
  struct NestedStructA {
    v: i64;
  };
  variant NestedVariantA {
    a: i32;
    b: i64;
  };
  vector NestedVectorA<i32>;
  map NestedMapA<i32, str>;

  nested_struct_field: NestedStructA;
  nested_variant_field: NestedVariantA;
  nested_vector_field: NestedVectorA;
  nested_map_field: NestedMapA;
};



// Vector and map using symref'd type parameters.
vector VectorB<StructA>;
map MapB<i32, StructA>;

// Struct containing nested and inline vector and map using
// symref'd type arguments.
struct StructD {
  vector VectorB<StructA>;
  map MapB<i32, StructA>;

  nested_vecB: VectorB;
  nested_mapB: MapB;

  inline_vec: vector<StructB>;
  //inline_map: map<i32, StructB>;
  
};

