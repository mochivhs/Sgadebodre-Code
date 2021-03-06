// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_meta_data_font_AlphaCharacter
#include <meta/data/font/AlphaCharacter.h>
#endif
#ifndef INCLUDED_meta_data_font_Alphabet
#include <meta/data/font/Alphabet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c8140a5e075f86ef_18_new,"meta.data.font.Alphabet","new",0x00884e89,"meta.data.font.Alphabet.new","meta/data/font/Alphabet.hx",18,0x7f401f06)
static const ::String _hx_array_data_ecb25617_1[] = {
	HX_("GF_1",d1,96,23,2f),HX_("GF_2",d2,96,23,2f),HX_("GF_3",d3,96,23,2f),HX_("GF_4",d4,96,23,2f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_78_startText,"meta.data.font.Alphabet","startText",0x5e844918,"meta.data.font.Alphabet.startText","meta/data/font/Alphabet.hx",78,0x7f401f06)
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_110_destroyText,"meta.data.font.Alphabet","destroyText",0x999879f0,"meta.data.font.Alphabet.destroyText","meta/data/font/Alphabet.hx",110,0x7f401f06)
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_119_addText,"meta.data.font.Alphabet","addText",0xcbf05617,"meta.data.font.Alphabet.addText","meta/data/font/Alphabet.hx",119,0x7f401f06)
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_174_doSplitWords,"meta.data.font.Alphabet","doSplitWords",0xefc0ca51,"meta.data.font.Alphabet.doSplitWords","meta/data/font/Alphabet.hx",174,0x7f401f06)
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_199_startTypedText,"meta.data.font.Alphabet","startTypedText",0x20b385ec,"meta.data.font.Alphabet.startTypedText","meta/data/font/Alphabet.hx",199,0x7f401f06)
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_181_startTypedText,"meta.data.font.Alphabet","startTypedText",0x20b385ec,"meta.data.font.Alphabet.startTypedText","meta/data/font/Alphabet.hx",181,0x7f401f06)
static const int _hx_array_data_ecb25617_10[] = {
	(int)0,
};
static const Float _hx_array_data_ecb25617_11[] = {
	(Float)0,
};
static const int _hx_array_data_ecb25617_12[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_c8140a5e075f86ef_293_update,"meta.data.font.Alphabet","update",0x034d8780,"meta.data.font.Alphabet.update","meta/data/font/Alphabet.hx",293,0x7f401f06)
namespace meta{
namespace data{
namespace font{

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_textSize){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            		bool typed = __o_typed.Default(false);
            		 ::Dynamic textSize = __o_textSize;
            		if (::hx::IsNull(__o_textSize)) textSize = 1;
            	HX_STACKFRAME(&_hx_pos_c8140a5e075f86ef_18_new)
HXLINE( 176)		this->personTalking = HX_("gf",1f,5a,00,00);
HXLINE(  64)		this->lastPlayed = 0;
HXLINE(  63)		this->playSounds = true;
HXLINE(  62)		this->soundChance = 40;
HXLINE(  61)		this->beginPath = HX_("assets/sounds/",1f,fa,fb,94);
HXLINE(  60)		this->soundChoices = ::Array_obj< ::String >::fromData( _hx_array_data_ecb25617_1,4);
HXLINE(  58)		this->isBold = false;
HXLINE(  56)		this->splitWords = ::Array_obj< ::String >::__new(0);
HXLINE(  54)		this->lastWasSpace = false;
HXLINE(  53)		this->xPosResetted = false;
HXLINE(  48)		this->yMulti = ((Float)1);
HXLINE(  46)		this->finishedLine = false;
HXLINE(  44)		this->widthOfWords = ( (Float)(::flixel::FlxG_obj::width) );
HXLINE(  42)		this->_curText = HX_("",00,00,00,00);
HXLINE(  41)		this->_finalText = HX_("",00,00,00,00);
HXLINE(  39)		this->text = HX_("",00,00,00,00);
HXLINE(  37)		this->isMenuItem = false;
HXLINE(  35)		this->xTo = 100;
HXLINE(  31)		this->extensionJ = 0;
HXLINE(  30)		this->controlGroupID = 0;
HXLINE(  29)		this->disableX = false;
HXLINE(  28)		this->targetY = ((Float)0);
HXLINE(  25)		this->paused = false;
HXLINE(  21)		this->randomSpeed = false;
HXLINE(  20)		this->textSpeed = ((Float)0.06);
HXLINE(  68)		super::__construct(x,y,null());
HXLINE(  70)		this->text = text;
HXLINE(  71)		this->isBold = ( (bool)(bold) );
HXLINE(  72)		this->textSize = ( (Float)(textSize) );
HXLINE(  74)		this->startText(text,typed);
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5331cb11) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x5331cb11;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::startText(::String newText,bool typed){
            	HX_STACKFRAME(&_hx_pos_c8140a5e075f86ef_78_startText)
HXLINE(  79)		this->yMulti = ( (Float)(1) );
HXLINE(  80)		this->finishedLine = false;
HXLINE(  81)		this->xPosResetted = true;
HXLINE(  83)		this->_finalText = newText;
HXLINE(  84)		this->textInit = newText;
HXLINE(  85)		this->text = newText;
HXLINE(  87)		if ((this->text != HX_("",00,00,00,00))) {
HXLINE(  89)			if (typed) {
HXLINE(  91)				this->startTypedText();
            			}
            			else {
HXLINE(  95)				this->addText();
            			}
            		}
            		else {
HXLINE( 100)			if (::hx::IsNotNull( this->swagTypingTimer )) {
HXLINE( 102)				this->destroyText();
HXLINE( 103)				this->swagTypingTimer->cancel();
HXLINE( 104)				this->swagTypingTimer->destroy();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Alphabet_obj,startText,(void))

void Alphabet_obj::destroyText(){
            	HX_STACKFRAME(&_hx_pos_c8140a5e075f86ef_110_destroyText)
HXLINE( 111)		{
HXLINE( 111)			int _g = 0;
HXDLIN( 111)			::Array< ::Dynamic> _g1 = this->_sprites->copy();
HXDLIN( 111)			while((_g < _g1->length)){
HXLINE( 111)				 ::flixel::FlxSprite _sprite = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN( 111)				_g = (_g + 1);
HXLINE( 112)				_sprite->destroy();
            			}
            		}
HXLINE( 113)		this->group->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,destroyText,(void))

void Alphabet_obj::addText(){
            	HX_GC_STACKFRAME(&_hx_pos_c8140a5e075f86ef_119_addText)
HXLINE( 120)		this->doSplitWords();
HXLINE( 122)		this->arrayLetters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 123)		Float xPos = ( (Float)(0) );
HXLINE( 124)		{
HXLINE( 124)			int _g = 0;
HXDLIN( 124)			::Array< ::String > _g1 = this->splitWords;
HXDLIN( 124)			while((_g < _g1->length)){
HXLINE( 124)				::String character = _g1->__get(_g);
HXDLIN( 124)				_g = (_g + 1);
HXLINE( 126)				bool _hx_tmp;
HXDLIN( 126)				if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 126)					_hx_tmp = (character == HX_("-",2d,00,00,00));
            				}
            				else {
HXLINE( 126)					_hx_tmp = true;
            				}
HXDLIN( 126)				if (_hx_tmp) {
HXLINE( 127)					this->lastWasSpace = true;
            				}
HXLINE( 129)				bool isNumber = (::meta::data::font::AlphaCharacter_obj::numbers.indexOf(character,null()) != -1);
HXLINE( 130)				bool isSymbol = (::meta::data::font::AlphaCharacter_obj::symbols.indexOf(character,null()) != -1);
HXLINE( 132)				bool _hx_tmp1;
HXDLIN( 132)				::String _hx_tmp2 = ::meta::data::font::AlphaCharacter_obj::alphabet;
HXDLIN( 132)				if ((_hx_tmp2.indexOf(character.toLowerCase(),null()) == -1)) {
HXLINE( 132)					_hx_tmp1 = (::meta::data::font::AlphaCharacter_obj::numbers.indexOf(character,null()) != -1);
            				}
            				else {
HXLINE( 132)					_hx_tmp1 = true;
            				}
HXDLIN( 132)				if (_hx_tmp1) {
HXLINE( 134)					if (this->xPosResetted) {
HXLINE( 136)						xPos = ( (Float)(0) );
HXLINE( 137)						this->xPosResetted = false;
            					}
            					else {
HXLINE( 141)						if (::hx::IsNotNull( this->lastSprite )) {
HXLINE( 142)							xPos = (xPos + this->lastSprite->get_width());
            						}
            					}
HXLINE( 145)					if (this->lastWasSpace) {
HXLINE( 147)						xPos = (xPos + 40);
HXLINE( 148)						this->lastWasSpace = false;
            					}
HXLINE( 151)					 ::meta::data::font::AlphaCharacter letter =  ::meta::data::font::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,( (Float)(0) ),this->textSize);
HXLINE( 153)					if (this->isBold) {
HXLINE( 154)						letter->createBold(character);
            					}
            					else {
HXLINE( 157)						if (isNumber) {
HXLINE( 158)							letter->createNumber(character);
            						}
            						else {
HXLINE( 159)							if (isSymbol) {
HXLINE( 160)								letter->createSymbol(character);
            							}
            							else {
HXLINE( 162)								letter->createLetter(character);
            							}
            						}
            					}
HXLINE( 165)					this->arrayLetters->push(letter);
HXLINE( 166)					this->add(letter);
HXLINE( 168)					this->lastSprite = letter;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,addText,(void))

void Alphabet_obj::doSplitWords(){
            	HX_STACKFRAME(&_hx_pos_c8140a5e075f86ef_174_doSplitWords)
HXDLIN( 174)		this->splitWords = this->_finalText.split(HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,doSplitWords,(void))

void Alphabet_obj::startTypedText(){
            		HX_BEGIN_LOCAL_FUNC_S4(::hx::LocalFunc,_hx_Closure_0, ::meta::data::font::Alphabet,_gthis,::Array< Float >,xPos,::Array< int >,loopNum,::Array< int >,curRow) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_c8140a5e075f86ef_199_startTypedText)
HXLINE( 200)			if ((_gthis->_finalText.cca(loopNum->__get(0)) == 10)) {
HXLINE( 202)				 ::meta::data::font::Alphabet _gthis1 = _gthis;
HXDLIN( 202)				_gthis1->yMulti = (_gthis1->yMulti + 1);
HXLINE( 203)				_gthis->xPosResetted = true;
HXLINE( 204)				::Array< int > curRow1 = curRow;
HXDLIN( 204)				int _hx_tmp = 0;
HXDLIN( 204)				curRow1[_hx_tmp] = (curRow1->__get(_hx_tmp) + 1);
            			}
HXLINE( 207)			if ((_gthis->splitWords->__get(loopNum->__get(0)) == HX_(" ",20,00,00,00))) {
HXLINE( 209)				_gthis->lastWasSpace = true;
            			}
HXLINE( 213)			bool isNumber = (::meta::data::font::AlphaCharacter_obj::numbers.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 214)			bool isSymbol = (::meta::data::font::AlphaCharacter_obj::symbols.indexOf(_gthis->splitWords->__get(loopNum->__get(0)),null()) != -1);
HXLINE( 220)			bool _hx_tmp;
HXDLIN( 220)			bool _hx_tmp1;
HXDLIN( 220)			::String _hx_tmp2 = ::meta::data::font::AlphaCharacter_obj::alphabet;
HXDLIN( 220)			if ((_hx_tmp2.indexOf(_gthis->splitWords->__get(loopNum->__get(0)).toLowerCase(),null()) == -1)) {
HXLINE( 220)				_hx_tmp1 = isNumber;
            			}
            			else {
HXLINE( 220)				_hx_tmp1 = true;
            			}
HXDLIN( 220)			if (!(_hx_tmp1)) {
HXLINE( 220)				_hx_tmp = isSymbol;
            			}
            			else {
HXLINE( 220)				_hx_tmp = true;
            			}
HXDLIN( 220)			if (_hx_tmp) {
HXLINE( 222)				bool _hx_tmp;
HXDLIN( 222)				if (::hx::IsNotNull( _gthis->lastSprite )) {
HXLINE( 222)					_hx_tmp = !(_gthis->xPosResetted);
            				}
            				else {
HXLINE( 222)					_hx_tmp = false;
            				}
HXDLIN( 222)				if (_hx_tmp) {
HXLINE( 224)					_gthis->lastSprite->updateHitbox();
HXLINE( 225)					::Array< Float > xPos1 = xPos;
HXDLIN( 225)					int _hx_tmp = 0;
HXDLIN( 225)					Float xPos2 = xPos1->__get(_hx_tmp);
HXDLIN( 225)					xPos1[_hx_tmp] = (xPos2 + (_gthis->lastSprite->get_width() + 3));
            				}
            				else {
HXLINE( 229)					xPos[0] = ( (Float)(0) );
HXLINE( 230)					_gthis->xPosResetted = false;
            				}
HXLINE( 233)				if (_gthis->lastWasSpace) {
HXLINE( 235)					::Array< Float > xPos1 = xPos;
HXDLIN( 235)					int _hx_tmp = 0;
HXDLIN( 235)					xPos1[_hx_tmp] = (xPos1->__get(_hx_tmp) + 20);
HXLINE( 236)					_gthis->lastWasSpace = false;
            				}
HXLINE( 238)				 ::meta::data::font::AlphaCharacter letter =  ::meta::data::font::AlphaCharacter_obj::__alloc( HX_CTX ,xPos->__get(0),(( (Float)(55) ) * _gthis->yMulti),_gthis->textSize);
HXLINE( 239)				letter->row = curRow->__get(0);
HXLINE( 240)				if (_gthis->isBold) {
HXLINE( 242)					letter->createBold(_gthis->splitWords->__get(loopNum->__get(0)));
            				}
            				else {
HXLINE( 246)					if (isNumber) {
HXLINE( 247)						letter->createNumber(_gthis->splitWords->__get(loopNum->__get(0)));
            					}
            					else {
HXLINE( 248)						if (isSymbol) {
HXLINE( 249)							letter->createSymbol(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            						else {
HXLINE( 251)							letter->createLetter(_gthis->splitWords->__get(loopNum->__get(0)));
            						}
            					}
HXLINE( 253)					{
HXLINE( 253)						 ::meta::data::font::AlphaCharacter _g = letter;
HXDLIN( 253)						_g->set_x((_g->x + 90));
            					}
            				}
HXLINE( 256)				bool _hx_tmp1;
HXDLIN( 256)				Float Chance = ( (Float)(_gthis->soundChance) );
HXDLIN( 256)				if (!((::flixel::FlxG_obj::random->_hx_float(0,100,null()) < Chance))) {
HXLINE( 256)					_hx_tmp1 = (_gthis->lastPlayed > 2);
            				}
            				else {
HXLINE( 256)					_hx_tmp1 = true;
            				}
HXDLIN( 256)				if (_hx_tmp1) {
HXLINE( 258)					if (_gthis->playSounds) {
HXLINE( 260)						_gthis->lastPlayed = 0;
HXLINE( 262)						int cur = ::flixel::FlxG_obj::random->_hx_int(0,(_gthis->soundChoices->length - 1),null());
HXLINE( 263)						::String daSound = (((_gthis->beginPath + _gthis->soundChoices->__get(cur)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00));
HXLINE( 265)						::flixel::FlxG_obj::sound->play(daSound,null(),null(),null(),null(),null());
            					}
            				}
            				else {
HXLINE( 269)					 ::meta::data::font::Alphabet _gthis1 = _gthis;
HXDLIN( 269)					_gthis1->lastPlayed = (_gthis1->lastPlayed + 1);
            				}
HXLINE( 271)				_gthis->add(letter).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 273)				_gthis->lastSprite = letter;
            			}
HXLINE( 276)			::Array< int > loopNum1 = loopNum;
HXDLIN( 276)			int _hx_tmp3 = 0;
HXDLIN( 276)			loopNum1[_hx_tmp3] = (loopNum1->__get(_hx_tmp3) + 1);
HXLINE( 278)			if (_gthis->randomSpeed) {
HXLINE( 279)				tmr->time = ::flixel::FlxG_obj::random->_hx_float((((Float)0.8) * _gthis->textSpeed),(((Float)1.8) * _gthis->textSpeed),null());
            			}
HXLINE( 284)			if ((loopNum->__get(0) >= _gthis->splitWords->length)) {
HXLINE( 286)				_gthis->finishedLine = true;
HXLINE( 287)				tmr->destroy();
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_c8140a5e075f86ef_181_startTypedText)
HXLINE( 180)		 ::meta::data::font::Alphabet _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 182)		this->_finalText = this->text;
HXLINE( 183)		this->doSplitWords();
HXLINE( 186)		this->destroyText();
HXLINE( 188)		::Array< int > loopNum = ::Array_obj< int >::fromData( _hx_array_data_ecb25617_10,1);
HXLINE( 190)		::Array< Float > xPos = ::Array_obj< Float >::fromData( _hx_array_data_ecb25617_11,1);
HXLINE( 191)		::Array< int > curRow = ::Array_obj< int >::fromData( _hx_array_data_ecb25617_12,1);
HXLINE( 194)		if (::hx::IsNotNull( this->swagTypingTimer )) {
HXLINE( 195)			this->swagTypingTimer->destroy();
            		}
HXLINE( 198)		this->swagTypingTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(this->textSpeed, ::Dynamic(new _hx_Closure_0(_gthis,xPos,loopNum,curRow)),0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,startTypedText,(void))

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c8140a5e075f86ef_293_update)
HXLINE( 294)		if (this->isMenuItem) {
HXLINE( 296)			Float scaledY = ::flixel::math::FlxMath_obj::remapToRange(this->targetY,( (Float)(0) ),( (Float)(1) ),( (Float)(0) ),((Float)1.3));
HXLINE( 298)			Float a = this->y;
HXDLIN( 298)			this->set_y((a + ((elapsed * ( (Float)(6) )) * (((scaledY * ( (Float)(120) )) + (( (Float)(::flixel::FlxG_obj::height) ) * ((Float)0.48))) - a))));
HXLINE( 300)			if (!(this->disableX)) {
HXLINE( 301)				Float a = this->x;
HXDLIN( 301)				this->set_x((a + ((elapsed * ( (Float)(6) )) * (((this->targetY * ( (Float)(20) )) + 90) - a))));
            			}
            			else {
HXLINE( 303)				Float a = this->x;
HXDLIN( 303)				this->set_x((a + ((elapsed * ( (Float)(6) )) * (( (Float)(this->xTo) ) - a))));
            			}
            		}
HXLINE( 306)		if ((this->text != this->textInit)) {
HXLINE( 308)			if ((this->arrayLetters->length > 0)) {
HXLINE( 309)				int _g = 0;
HXDLIN( 309)				int _g1 = this->arrayLetters->length;
HXDLIN( 309)				while((_g < _g1)){
HXLINE( 309)					_g = (_g + 1);
HXDLIN( 309)					int i = (_g - 1);
HXLINE( 310)					this->arrayLetters->__get(i).StaticCast<  ::meta::data::font::AlphaCharacter >()->destroy();
            				}
            			}
HXLINE( 312)			this->lastSprite = null();
HXLINE( 313)			this->startText(this->text,false);
            		}
HXLINE( 316)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_textSize) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_textSize);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold,::hx::Null< bool >  __o_typed, ::Dynamic __o_textSize) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "meta.data.font.Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold,__o_typed,__o_textSize);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(textSpeed,"textSpeed");
	HX_MARK_MEMBER_NAME(randomSpeed,"randomSpeed");
	HX_MARK_MEMBER_NAME(textSize,"textSize");
	HX_MARK_MEMBER_NAME(paused,"paused");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(disableX,"disableX");
	HX_MARK_MEMBER_NAME(controlGroupID,"controlGroupID");
	HX_MARK_MEMBER_NAME(extensionJ,"extensionJ");
	HX_MARK_MEMBER_NAME(textInit,"textInit");
	HX_MARK_MEMBER_NAME(xTo,"xTo");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(_finalText,"_finalText");
	HX_MARK_MEMBER_NAME(_curText,"_curText");
	HX_MARK_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_MARK_MEMBER_NAME(finishedLine,"finishedLine");
	HX_MARK_MEMBER_NAME(yMulti,"yMulti");
	HX_MARK_MEMBER_NAME(lastSprite,"lastSprite");
	HX_MARK_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_MARK_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_MARK_MEMBER_NAME(splitWords,"splitWords");
	HX_MARK_MEMBER_NAME(isBold,"isBold");
	HX_MARK_MEMBER_NAME(soundChoices,"soundChoices");
	HX_MARK_MEMBER_NAME(beginPath,"beginPath");
	HX_MARK_MEMBER_NAME(soundChance,"soundChance");
	HX_MARK_MEMBER_NAME(playSounds,"playSounds");
	HX_MARK_MEMBER_NAME(lastPlayed,"lastPlayed");
	HX_MARK_MEMBER_NAME(arrayLetters,"arrayLetters");
	HX_MARK_MEMBER_NAME(personTalking,"personTalking");
	HX_MARK_MEMBER_NAME(swagTypingTimer,"swagTypingTimer");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(textSpeed,"textSpeed");
	HX_VISIT_MEMBER_NAME(randomSpeed,"randomSpeed");
	HX_VISIT_MEMBER_NAME(textSize,"textSize");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(disableX,"disableX");
	HX_VISIT_MEMBER_NAME(controlGroupID,"controlGroupID");
	HX_VISIT_MEMBER_NAME(extensionJ,"extensionJ");
	HX_VISIT_MEMBER_NAME(textInit,"textInit");
	HX_VISIT_MEMBER_NAME(xTo,"xTo");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(_finalText,"_finalText");
	HX_VISIT_MEMBER_NAME(_curText,"_curText");
	HX_VISIT_MEMBER_NAME(widthOfWords,"widthOfWords");
	HX_VISIT_MEMBER_NAME(finishedLine,"finishedLine");
	HX_VISIT_MEMBER_NAME(yMulti,"yMulti");
	HX_VISIT_MEMBER_NAME(lastSprite,"lastSprite");
	HX_VISIT_MEMBER_NAME(xPosResetted,"xPosResetted");
	HX_VISIT_MEMBER_NAME(lastWasSpace,"lastWasSpace");
	HX_VISIT_MEMBER_NAME(splitWords,"splitWords");
	HX_VISIT_MEMBER_NAME(isBold,"isBold");
	HX_VISIT_MEMBER_NAME(soundChoices,"soundChoices");
	HX_VISIT_MEMBER_NAME(beginPath,"beginPath");
	HX_VISIT_MEMBER_NAME(soundChance,"soundChance");
	HX_VISIT_MEMBER_NAME(playSounds,"playSounds");
	HX_VISIT_MEMBER_NAME(lastPlayed,"lastPlayed");
	HX_VISIT_MEMBER_NAME(arrayLetters,"arrayLetters");
	HX_VISIT_MEMBER_NAME(personTalking,"personTalking");
	HX_VISIT_MEMBER_NAME(swagTypingTimer,"swagTypingTimer");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xTo") ) { return ::hx::Val( xTo ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { return ::hx::Val( paused ); }
		if (HX_FIELD_EQ(inName,"yMulti") ) { return ::hx::Val( yMulti ); }
		if (HX_FIELD_EQ(inName,"isBold") ) { return ::hx::Val( isBold ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { return ::hx::Val( textSize ); }
		if (HX_FIELD_EQ(inName,"disableX") ) { return ::hx::Val( disableX ); }
		if (HX_FIELD_EQ(inName,"textInit") ) { return ::hx::Val( textInit ); }
		if (HX_FIELD_EQ(inName,"_curText") ) { return ::hx::Val( _curText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textSpeed") ) { return ::hx::Val( textSpeed ); }
		if (HX_FIELD_EQ(inName,"beginPath") ) { return ::hx::Val( beginPath ); }
		if (HX_FIELD_EQ(inName,"startText") ) { return ::hx::Val( startText_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensionJ") ) { return ::hx::Val( extensionJ ); }
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"_finalText") ) { return ::hx::Val( _finalText ); }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { return ::hx::Val( lastSprite ); }
		if (HX_FIELD_EQ(inName,"splitWords") ) { return ::hx::Val( splitWords ); }
		if (HX_FIELD_EQ(inName,"playSounds") ) { return ::hx::Val( playSounds ); }
		if (HX_FIELD_EQ(inName,"lastPlayed") ) { return ::hx::Val( lastPlayed ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomSpeed") ) { return ::hx::Val( randomSpeed ); }
		if (HX_FIELD_EQ(inName,"soundChance") ) { return ::hx::Val( soundChance ); }
		if (HX_FIELD_EQ(inName,"destroyText") ) { return ::hx::Val( destroyText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { return ::hx::Val( widthOfWords ); }
		if (HX_FIELD_EQ(inName,"finishedLine") ) { return ::hx::Val( finishedLine ); }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { return ::hx::Val( xPosResetted ); }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { return ::hx::Val( lastWasSpace ); }
		if (HX_FIELD_EQ(inName,"soundChoices") ) { return ::hx::Val( soundChoices ); }
		if (HX_FIELD_EQ(inName,"arrayLetters") ) { return ::hx::Val( arrayLetters ); }
		if (HX_FIELD_EQ(inName,"doSplitWords") ) { return ::hx::Val( doSplitWords_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { return ::hx::Val( personTalking ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"controlGroupID") ) { return ::hx::Val( controlGroupID ); }
		if (HX_FIELD_EQ(inName,"startTypedText") ) { return ::hx::Val( startTypedText_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"swagTypingTimer") ) { return ::hx::Val( swagTypingTimer ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"xTo") ) { xTo=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yMulti") ) { yMulti=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBold") ) { isBold=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { textSize=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disableX") ) { disableX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textInit") ) { textInit=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_curText") ) { _curText=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"textSpeed") ) { textSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"beginPath") ) { beginPath=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"extensionJ") ) { extensionJ=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_finalText") ) { _finalText=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastSprite") ) { lastSprite=inValue.Cast<  ::meta::data::font::AlphaCharacter >(); return inValue; }
		if (HX_FIELD_EQ(inName,"splitWords") ) { splitWords=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playSounds") ) { playSounds=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastPlayed") ) { lastPlayed=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomSpeed") ) { randomSpeed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundChance") ) { soundChance=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthOfWords") ) { widthOfWords=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"finishedLine") ) { finishedLine=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"xPosResetted") ) { xPosResetted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastWasSpace") ) { lastWasSpace=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundChoices") ) { soundChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrayLetters") ) { arrayLetters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"personTalking") ) { personTalking=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"controlGroupID") ) { controlGroupID=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"swagTypingTimer") ) { swagTypingTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("textSpeed",9a,27,57,1a));
	outFields->push(HX_("randomSpeed",84,ba,fe,eb));
	outFields->push(HX_("textSize",0e,f4,4e,4f));
	outFields->push(HX_("paused",ae,40,84,ef));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("disableX",70,41,04,7c));
	outFields->push(HX_("controlGroupID",fd,12,ee,b9));
	outFields->push(HX_("extensionJ",eb,7b,70,89));
	outFields->push(HX_("textInit",5d,8e,b6,48));
	outFields->push(HX_("xTo",13,58,5b,00));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("_finalText",04,c7,73,eb));
	outFields->push(HX_("_curText",ce,97,c7,f1));
	outFields->push(HX_("widthOfWords",6c,29,47,59));
	outFields->push(HX_("finishedLine",86,78,8e,f1));
	outFields->push(HX_("yMulti",40,a3,b1,04));
	outFields->push(HX_("lastSprite",fb,be,70,8e));
	outFields->push(HX_("xPosResetted",80,a7,a1,63));
	outFields->push(HX_("lastWasSpace",53,93,45,c9));
	outFields->push(HX_("splitWords",2f,7e,9f,9d));
	outFields->push(HX_("isBold",8f,46,82,5e));
	outFields->push(HX_("soundChoices",e3,18,50,ed));
	outFields->push(HX_("beginPath",6e,c4,2b,93));
	outFields->push(HX_("soundChance",23,94,9f,6a));
	outFields->push(HX_("playSounds",d8,39,f2,d8));
	outFields->push(HX_("lastPlayed",49,ce,93,02));
	outFields->push(HX_("arrayLetters",34,2c,ee,b5));
	outFields->push(HX_("personTalking",21,d4,8f,27));
	outFields->push(HX_("swagTypingTimer",64,27,6a,e9));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,textSpeed),HX_("textSpeed",9a,27,57,1a)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,randomSpeed),HX_("randomSpeed",84,ba,fe,eb)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,textSize),HX_("textSize",0e,f4,4e,4f)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,paused),HX_("paused",ae,40,84,ef)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,disableX),HX_("disableX",70,41,04,7c)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,controlGroupID),HX_("controlGroupID",fd,12,ee,b9)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,extensionJ),HX_("extensionJ",eb,7b,70,89)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,textInit),HX_("textInit",5d,8e,b6,48)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,xTo),HX_("xTo",13,58,5b,00)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_finalText),HX_("_finalText",04,c7,73,eb)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,_curText),HX_("_curText",ce,97,c7,f1)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,widthOfWords),HX_("widthOfWords",6c,29,47,59)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,finishedLine),HX_("finishedLine",86,78,8e,f1)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,yMulti),HX_("yMulti",40,a3,b1,04)},
	{::hx::fsObject /*  ::meta::data::font::AlphaCharacter */ ,(int)offsetof(Alphabet_obj,lastSprite),HX_("lastSprite",fb,be,70,8e)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,xPosResetted),HX_("xPosResetted",80,a7,a1,63)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,lastWasSpace),HX_("lastWasSpace",53,93,45,c9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,splitWords),HX_("splitWords",2f,7e,9f,9d)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isBold),HX_("isBold",8f,46,82,5e)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Alphabet_obj,soundChoices),HX_("soundChoices",e3,18,50,ed)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,beginPath),HX_("beginPath",6e,c4,2b,93)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,soundChance),HX_("soundChance",23,94,9f,6a)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,playSounds),HX_("playSounds",d8,39,f2,d8)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,lastPlayed),HX_("lastPlayed",49,ce,93,02)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Alphabet_obj,arrayLetters),HX_("arrayLetters",34,2c,ee,b5)},
	{::hx::fsString,(int)offsetof(Alphabet_obj,personTalking),HX_("personTalking",21,d4,8f,27)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(Alphabet_obj,swagTypingTimer),HX_("swagTypingTimer",64,27,6a,e9)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Alphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("textSpeed",9a,27,57,1a),
	HX_("randomSpeed",84,ba,fe,eb),
	HX_("textSize",0e,f4,4e,4f),
	HX_("paused",ae,40,84,ef),
	HX_("targetY",e8,f3,67,88),
	HX_("disableX",70,41,04,7c),
	HX_("controlGroupID",fd,12,ee,b9),
	HX_("extensionJ",eb,7b,70,89),
	HX_("textInit",5d,8e,b6,48),
	HX_("xTo",13,58,5b,00),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("text",ad,cc,f9,4c),
	HX_("_finalText",04,c7,73,eb),
	HX_("_curText",ce,97,c7,f1),
	HX_("widthOfWords",6c,29,47,59),
	HX_("finishedLine",86,78,8e,f1),
	HX_("yMulti",40,a3,b1,04),
	HX_("lastSprite",fb,be,70,8e),
	HX_("xPosResetted",80,a7,a1,63),
	HX_("lastWasSpace",53,93,45,c9),
	HX_("splitWords",2f,7e,9f,9d),
	HX_("isBold",8f,46,82,5e),
	HX_("soundChoices",e3,18,50,ed),
	HX_("beginPath",6e,c4,2b,93),
	HX_("soundChance",23,94,9f,6a),
	HX_("playSounds",d8,39,f2,d8),
	HX_("lastPlayed",49,ce,93,02),
	HX_("startText",2f,46,ed,05),
	HX_("destroyText",c7,2a,0c,ab),
	HX_("arrayLetters",34,2c,ee,b5),
	HX_("addText",6e,0f,37,89),
	HX_("doSplitWords",9a,d5,87,23),
	HX_("personTalking",21,d4,8f,27),
	HX_("swagTypingTimer",64,27,6a,e9),
	HX_("startTypedText",75,b5,ca,1c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class Alphabet_obj::__mClass;

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("meta.data.font.Alphabet",17,56,b2,ec);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace meta
} // end namespace data
} // end namespace font
