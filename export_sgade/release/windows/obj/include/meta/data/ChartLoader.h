// Generated by Haxe 4.1.5
#ifndef INCLUDED_meta_data_ChartLoader
#define INCLUDED_meta_data_ChartLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(gameObjects,userInterface,notes,Note)
HX_DECLARE_CLASS2(meta,data,ChartLoader)
HX_DECLARE_CLASS3(meta,data,dependency,FNFSprite)

namespace meta{
namespace data{


class HXCPP_CLASS_ATTRIBUTES ChartLoader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ChartLoader_obj OBJ_;
		ChartLoader_obj();

	public:
		enum { _hx_ClassId = 0x73a64722 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="meta.data.ChartLoader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"meta.data.ChartLoader"); }

		inline static ::hx::ObjectPtr< ChartLoader_obj > __new() {
			::hx::ObjectPtr< ChartLoader_obj > __this = new ChartLoader_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ChartLoader_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ChartLoader_obj *__this = (ChartLoader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ChartLoader_obj), false, "meta.data.ChartLoader"));
			*(void **)__this = ChartLoader_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ChartLoader_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ChartLoader",71,eb,23,a3); }

		static ::Array< ::Dynamic> generateChartType( ::Dynamic songData,::String typeOfChart);
		static ::Dynamic generateChartType_dyn();

};

} // end namespace meta
} // end namespace data

#endif /* INCLUDED_meta_data_ChartLoader */ 
