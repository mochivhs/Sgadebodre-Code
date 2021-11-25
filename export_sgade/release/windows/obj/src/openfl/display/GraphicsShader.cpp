// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_642a1830a16331e0_9_new,"openfl.display.GraphicsShader","new",0xf37fb62c,"openfl.display.GraphicsShader.new","openfl/display/GraphicsShader.hx",9,0x1b418782)
HX_LOCAL_STACK_FRAME(_hx_pos_642a1830a16331e0_108___initGL,"openfl.display.GraphicsShader","__initGL",0x3adf5f09,"openfl.display.GraphicsShader.__initGL","openfl/display/GraphicsShader.hx",108,0x1b418782)
HX_LOCAL_STACK_FRAME(_hx_pos_642a1830a16331e0_119_processSource,"openfl.display.GraphicsShader","processSource",0x669e6176,"openfl.display.GraphicsShader.processSource","openfl/display/GraphicsShader.hx",119,0x1b418782)
namespace openfl{
namespace display{

void GraphicsShader_obj::__construct(::String __o_glVertexSource,::String __o_glFragmentSource,::hx::Null< bool >  __o_initNow){
            		::String glVertexSource = __o_glVertexSource;
            		if (::hx::IsNull(__o_glVertexSource)) glVertexSource = HX_("",00,00,00,00);
            		::String glFragmentSource = __o_glFragmentSource;
            		if (::hx::IsNull(__o_glFragmentSource)) glFragmentSource = HX_("",00,00,00,00);
            		bool initNow = __o_initNow.Default(true);
            	HX_STACKFRAME(&_hx_pos_642a1830a16331e0_9_new)
HXLINE(  49)		this->glFragmentBody = HX_("vec4 color = texture2D (bitmap, openfl_TextureCoordv);\n\n\t\tif (color.a == 0.0) {\n\n\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\n\t\t} else if (openfl_HasColorTransform) {\n\n\t\t\tcolor = vec4 (color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4 (0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = 1.0; // openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp (openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0) {\n\n\t\t\t\tgl_FragColor = vec4 (color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\n\t\t\t} else {\n\n\t\t\t\tgl_FragColor = vec4 (0.0, 0.0, 0.0, 0.0);\n\n\t\t\t}\n\n\t\t} else {\n\n\t\t\tgl_FragColor = color * openfl_Alphav;\n\n\t\t}",09,a9,d8,31);
HXLINE(  40)		this->glFragmentHeader = HX_("varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;",49,37,b4,08);
HXLINE(  28)		this->glVertexBody = HX_("openfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;",60,5a,bf,0d);
HXLINE(  13)		this->glVertexHeader = HX_("attribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;",a7,dc,73,71);
HXLINE(  85)		super::__construct(null());
HXLINE(  87)		if ((glVertexSource != HX_("",00,00,00,00))) {
HXLINE(  88)			this->set_glVertexSource(glVertexSource);
            		}
            		else {
HXLINE(  90)			this->set_glVertexSource(HX_("#pragma header\n\t\t\t\tvoid main(void) {\n\t\t\t\t\t#pragma body\n\t\t\t\t}",e6,f1,8d,c7));
            		}
HXLINE(  95)		if ((glFragmentSource != HX_("",00,00,00,00))) {
HXLINE(  96)			this->set_glFragmentSource(glFragmentSource);
            		}
            		else {
HXLINE(  98)			this->set_glFragmentSource(HX_("#pragma header\n\t\t\t\tvoid main(void) {\n\t\t\t\t\t#pragma body\n\t\t\t\t}",e6,f1,8d,c7));
            		}
HXLINE( 103)		if (initNow) {
HXLINE( 104)			this->_hx___initGL();
            		}
            	}

Dynamic GraphicsShader_obj::__CreateEmpty() { return new GraphicsShader_obj; }

void *GraphicsShader_obj::_hx_vtable = 0;

Dynamic GraphicsShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GraphicsShader_obj > _hx_result = new GraphicsShader_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GraphicsShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1efca5b6;
	} else {
		return inClassId==(int)0x78d8d737;
	}
}

void GraphicsShader_obj::_hx___initGL(){
            	HX_STACKFRAME(&_hx_pos_642a1830a16331e0_108___initGL)
HXLINE( 109)		this->processSource();
HXLINE( 111)		this->_hx___isGenerated = true;
HXLINE( 112)		this->super::_hx___initGL();
HXLINE( 114)		this->bitmap = ( ( ::openfl::display::ShaderInput_openfl_display_BitmapData)(this->get_data()->__Field(HX_("bitmap",ef,0f,0c,f1),::hx::paccDynamic)) );
            	}


void GraphicsShader_obj::processSource(){
            	HX_STACKFRAME(&_hx_pos_642a1830a16331e0_119_processSource)
HXDLIN( 119)		bool _hx_tmp;
HXDLIN( 119)		if (::hx::IsNull( this->get_glVertexSource() )) {
HXDLIN( 119)			_hx_tmp = ::hx::IsNotNull( this->get_glFragmentSource() );
            		}
            		else {
HXDLIN( 119)			_hx_tmp = true;
            		}
HXDLIN( 119)		if (_hx_tmp) {
HXLINE( 121)			bool _hx_tmp;
HXDLIN( 121)			bool _hx_tmp1;
HXDLIN( 121)			if (::hx::IsNotNull( this->get_glFragmentSource() )) {
HXLINE( 121)				_hx_tmp1 = ::hx::IsNotNull( this->glFragmentHeader );
            			}
            			else {
HXLINE( 121)				_hx_tmp1 = false;
            			}
HXDLIN( 121)			if (_hx_tmp1) {
HXLINE( 121)				_hx_tmp = ::hx::IsNotNull( this->glFragmentBody );
            			}
            			else {
HXLINE( 121)				_hx_tmp = false;
            			}
HXDLIN( 121)			if (_hx_tmp) {
HXLINE( 123)				::String _hx_tmp = this->get_glFragmentSource();
HXDLIN( 123)				this->set_glFragmentSource(::StringTools_obj::replace(_hx_tmp,HX_("#pragma header",6e,d2,fa,47),this->glFragmentHeader));
HXLINE( 124)				::String _hx_tmp1 = this->get_glFragmentSource();
HXDLIN( 124)				this->set_glFragmentSource(::StringTools_obj::replace(_hx_tmp1,HX_("#pragma body",43,99,98,1b),this->glFragmentBody));
            			}
HXLINE( 127)			bool _hx_tmp2;
HXDLIN( 127)			bool _hx_tmp3;
HXDLIN( 127)			if (::hx::IsNotNull( this->get_glVertexSource() )) {
HXLINE( 127)				_hx_tmp3 = ::hx::IsNotNull( this->glVertexHeader );
            			}
            			else {
HXLINE( 127)				_hx_tmp3 = false;
            			}
HXDLIN( 127)			if (_hx_tmp3) {
HXLINE( 127)				_hx_tmp2 = ::hx::IsNotNull( this->glVertexBody );
            			}
            			else {
HXLINE( 127)				_hx_tmp2 = false;
            			}
HXDLIN( 127)			if (_hx_tmp2) {
HXLINE( 129)				::String _hx_tmp = this->get_glVertexSource();
HXDLIN( 129)				this->set_glVertexSource(::StringTools_obj::replace(_hx_tmp,HX_("#pragma header",6e,d2,fa,47),this->glVertexHeader));
HXLINE( 130)				::String _hx_tmp1 = this->get_glVertexSource();
HXDLIN( 130)				this->set_glVertexSource(::StringTools_obj::replace(_hx_tmp1,HX_("#pragma body",43,99,98,1b),this->glVertexBody));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GraphicsShader_obj,processSource,(void))


::hx::ObjectPtr< GraphicsShader_obj > GraphicsShader_obj::__new(::String __o_glVertexSource,::String __o_glFragmentSource,::hx::Null< bool >  __o_initNow) {
	::hx::ObjectPtr< GraphicsShader_obj > __this = new GraphicsShader_obj();
	__this->__construct(__o_glVertexSource,__o_glFragmentSource,__o_initNow);
	return __this;
}

::hx::ObjectPtr< GraphicsShader_obj > GraphicsShader_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_glVertexSource,::String __o_glFragmentSource,::hx::Null< bool >  __o_initNow) {
	GraphicsShader_obj *__this = (GraphicsShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GraphicsShader_obj), true, "openfl.display.GraphicsShader"));
	*(void **)__this = GraphicsShader_obj::_hx_vtable;
	__this->__construct(__o_glVertexSource,__o_glFragmentSource,__o_initNow);
	return __this;
}

GraphicsShader_obj::GraphicsShader_obj()
{
}

void GraphicsShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsShader);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(glVertexHeader,"glVertexHeader");
	HX_MARK_MEMBER_NAME(glVertexBody,"glVertexBody");
	HX_MARK_MEMBER_NAME(glFragmentHeader,"glFragmentHeader");
	HX_MARK_MEMBER_NAME(glFragmentBody,"glFragmentBody");
	 ::openfl::display::Shader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GraphicsShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(glVertexHeader,"glVertexHeader");
	HX_VISIT_MEMBER_NAME(glVertexBody,"glVertexBody");
	HX_VISIT_MEMBER_NAME(glFragmentHeader,"glFragmentHeader");
	HX_VISIT_MEMBER_NAME(glFragmentBody,"glFragmentBody");
	 ::openfl::display::Shader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GraphicsShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__initGL") ) { return ::hx::Val( _hx___initGL_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"glVertexBody") ) { return ::hx::Val( glVertexBody ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"processSource") ) { return ::hx::Val( processSource_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexHeader") ) { return ::hx::Val( glVertexHeader ); }
		if (HX_FIELD_EQ(inName,"glFragmentBody") ) { return ::hx::Val( glFragmentBody ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentHeader") ) { return ::hx::Val( glFragmentHeader ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GraphicsShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast<  ::openfl::display::ShaderInput_openfl_display_BitmapData >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"glVertexBody") ) { glVertexBody=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"glVertexHeader") ) { glVertexHeader=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glFragmentBody") ) { glFragmentBody=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"glFragmentHeader") ) { glFragmentHeader=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GraphicsShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	outFields->push(HX_("glVertexHeader",d6,c5,18,26));
	outFields->push(HX_("glVertexBody",ab,62,63,9a));
	outFields->push(HX_("glFragmentHeader",82,1e,99,c2));
	outFields->push(HX_("glFragmentBody",57,f8,d1,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GraphicsShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderInput_openfl_display_BitmapData */ ,(int)offsetof(GraphicsShader_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsString,(int)offsetof(GraphicsShader_obj,glVertexHeader),HX_("glVertexHeader",d6,c5,18,26)},
	{::hx::fsString,(int)offsetof(GraphicsShader_obj,glVertexBody),HX_("glVertexBody",ab,62,63,9a)},
	{::hx::fsString,(int)offsetof(GraphicsShader_obj,glFragmentHeader),HX_("glFragmentHeader",82,1e,99,c2)},
	{::hx::fsString,(int)offsetof(GraphicsShader_obj,glFragmentBody),HX_("glFragmentBody",57,f8,d1,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GraphicsShader_obj_sStaticStorageInfo = 0;
#endif

static ::String GraphicsShader_obj_sMemberFields[] = {
	HX_("bitmap",ef,0f,0c,f1),
	HX_("glVertexHeader",d6,c5,18,26),
	HX_("glVertexBody",ab,62,63,9a),
	HX_("glFragmentHeader",82,1e,99,c2),
	HX_("glFragmentBody",57,f8,d1,8d),
	HX_("__initGL",55,c8,7b,3f),
	HX_("processSource",aa,c4,84,08),
	::String(null()) };

::hx::Class GraphicsShader_obj::__mClass;

void GraphicsShader_obj::__register()
{
	GraphicsShader_obj _hx_dummy;
	GraphicsShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.GraphicsShader",3a,70,8e,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GraphicsShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GraphicsShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GraphicsShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GraphicsShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display