// Generated by Haxe 4.1.5
#ifndef INCLUDED_SettingTypes
#define INCLUDED_SettingTypes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(SettingTypes)


class SettingTypes_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef SettingTypes_obj OBJ_;

	public:
		SettingTypes_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("SettingTypes",e9,a0,97,10); }
		::String __ToString() const { return HX_("SettingTypes.",25,2b,15,74) + _hx_tag; }

		static ::SettingTypes Checkmark;
		static inline ::SettingTypes Checkmark_dyn() { return Checkmark; }
		static ::SettingTypes Selector;
		static inline ::SettingTypes Selector_dyn() { return Selector; }
};


#endif /* INCLUDED_SettingTypes */ 
