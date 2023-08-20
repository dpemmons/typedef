#include "table.h"

using namespace td;
using namespace td::table;
using namespace std;

shared_ptr<FieldDeclaration> td::table::Struct::GetField(const string& id) {
  for (auto m : members) {
    if (m->field_decl && *m->field_decl->identifier == id) {
      return m->field_decl;
    }
  }
  return nullptr;
}

shared_ptr<TypeDeclaration> td::table::Struct::GetType(const string& id) {
  for (auto m : members) {
    if (m->type_decl) {
      if (m->type_decl->st && *m->type_decl->st->identifier == id) {
        return m->type_decl;
      } else if (m->type_decl->var && *m->type_decl->var->identifier == id) {
        return m->type_decl;
      } else if (m->type_decl->vec && *m->type_decl->vec->identifier == id) {
        return m->type_decl;
      } else if (m->type_decl->map && *m->type_decl->map->identifier == id) {
        return m->type_decl;
      }
    }
  }
  return nullptr;
}

shared_ptr<FieldDeclaration> td::table::Variant::GetField(const string& id) {
  for (auto m : members) {
    if (m->field_decl && *m->field_decl->identifier == id) {
      return m->field_decl;
    }
  }
  return nullptr;
}

shared_ptr<TypeDeclaration> td::table::Variant::GetType(const string& id) {
  for (auto m : members) {
    if (m->type_decl) {
      if (m->type_decl->st && *m->type_decl->st->identifier == id) {
        return m->type_decl;
      } else if (m->type_decl->var && *m->type_decl->var->identifier == id) {
        return m->type_decl;
      } else if (m->type_decl->vec && *m->type_decl->vec->identifier == id) {
        return m->type_decl;
      } else if (m->type_decl->map && *m->type_decl->map->identifier == id) {
        return m->type_decl;
      }
    }
  }
  return nullptr;
}
