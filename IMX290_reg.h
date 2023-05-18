#ifndef __IMX230_H__
#define __IMX230_H__

const unsigned short imx290_id02[] = {

		0x3000 ,	0x01 ,
		0x3001 ,	0x00 ,
		0x3002 ,	0x00 ,//
		0x3003 ,	0x00 ,
		0x3004 ,	0x10 ,
		0x3005 ,	0x01 ,
		0x3006 ,	0x00 ,
		0x3007 ,	0x00 ,//1080p
		0x3008 ,	0xA0 ,
		0x3009 ,	0x02 ,//30fps
		0x300A ,	0xF0 ,
		0x300B ,	0x00 ,
		0x300C ,	0x00 ,
		0x300D ,	0x00 ,
		0x300E ,	0x01 ,
		0x300F ,	0x00 ,//
		0x3010 ,	0x21 ,//
		0x3011 ,	0x00 ,
		0x3012 ,	0x64 ,
		0x3013 ,	0x00 ,
		0x3014 ,	0x00 ,
		0x3015 ,	0x00 ,
		0x3016 ,	0x09 ,//
		0x3017 ,	0x00 ,
		0x3018 ,	0x65 ,
		0x3019 ,	0x04 ,
		0x301A ,	0x00 ,
		0x301B ,	0x00 ,
		0x301C ,	0x30 ,//HMAX
		0x301D ,	0x11 ,
		0x301E ,	0xB2 ,
		0x301F ,	0x01 ,
		0x3020 ,	0x00 ,
		0x3021 ,	0x00 ,
		0x3022 ,	0x00 ,
		0x3023 ,	0x00 ,
		0x3024 ,	0x00 ,
		0x3025 ,	0x00 ,
		0x3026 ,	0x00 ,
		0x3027 ,	0x00 ,
		0x3028 ,	0x00 ,
		0x3029 ,	0x00 ,
		0x302A ,	0x00 ,
		0x302B ,	0x00 ,
		0x302C ,	0x00 ,
		0x302D ,	0x00 ,
		0x302E ,	0x00 ,
		0x302F ,	0x00 ,
		0x3030 ,	0x00 ,
		0x3031 ,	0x00 ,
		0x3032 ,	0x00 ,
		0x3033 ,	0x00 ,
		0x3034 ,	0x00 ,
		0x3035 ,	0x00 ,
		0x3036 ,	0x00 ,
		0x3037 ,	0x00 ,
		0x3038 ,	0x00 ,
		0x3039 ,	0x00 ,
		0x303A ,	0x0C ,
		0x303B ,	0x00 ,
		0x303C ,	0x00 ,
		0x303D ,	0x00 ,
		0x303E ,	0x49 ,
		0x303F ,	0x04 ,
		0x3040 ,	0x00 ,
		0x3041 ,	0x00 ,
		0x3042 ,	0x9C ,
		0x3043 ,	0x07 ,
		0x3044 ,	0x01 ,
		0x3045 ,	0x01 ,
		0x3046 ,	0x01 ,
		0x3047 ,	0x01 ,
		0x3048 ,	0x00 ,
		0x3049 ,	0x08 ,
		0x304A ,	0x00 ,
		0x304B ,	0x0A ,//
		0x304C ,	0x11 ,
		0x304D ,	0x11 ,
		0x304E ,	0x00 ,
		0x304F ,	0x00 ,
		0x3050 ,	0x00 ,
		0x3051 ,	0x00 ,
		0x3052 ,	0x00 ,
		0x3053 ,	0x26 ,
		0x3054 ,	0x00 ,
		0x3055 ,	0x01 ,
		0x3056 ,	0x00 ,
		0x3057 ,	0x67 ,
		0x3058 ,	0x00 ,
		0x3059 ,	0x00 ,
		0x305A ,	0x15 ,
		0x305B ,	0x05 ,
		0x305C ,	0x18 ,//
		0x305D ,	0x03 ,//
		0x305E ,	0x20 ,//
		0x305F ,	0x01 ,
		0x3060 ,	0x00 ,
		0x3061 ,	0x4A ,
		0x3062 ,	0x41 ,
		0x3063 ,	0xB0 ,
		0x3064 ,	0x00 ,
		0x3065 ,	0x00 ,
		0x3066 ,	0x00 ,
		0x3067 ,	0x0C ,
		0x3068 ,	0x19 ,
		0x3069 ,	0x00 ,
		0x306A ,	0x00 ,
		0x306B ,	0x00 ,
		0x306C ,	0x64 ,
		0x306D ,	0x00 ,
		0x306E ,	0x00 ,
		0x306F ,	0x00 ,
		0x3070 ,	0x02 ,//
		0x3071 ,	0x11 ,//
		0x3072 ,	0x00 ,
		0x3073 ,	0x01 ,
		0x3074 ,	0x00 ,
		0x3075 ,	0x00 ,
		0x3076 ,	0x00 ,
		0x3077 ,	0x00 ,
		0x3078 ,	0x00 ,
		0x3079 ,	0x00 ,
		0x307A ,	0x00 ,
		0x307B ,	0x00 ,
		0x307C ,	0x00 ,
		0x307D ,	0x00 ,
		0x307E ,	0x00 ,
		0x307F ,	0x00 ,
		0x3080 ,	0x00 ,
		0x3081 ,	0x00 ,
		0x3082 ,	0x00 ,
		0x3083 ,	0x00 ,
		0x3084 ,	0x00 ,
		0x3085 ,	0x00 ,
		0x3086 ,	0x00 ,
		0x3087 ,	0x00 ,
		0x3088 ,	0x00 ,
		0x3089 ,	0x00 ,
		0x308A ,	0x00 ,
		0x308B ,	0x00 ,
		0x308C ,	0x02 ,
		0x308D ,	0x00 ,
		0x308E ,	0x00 ,
		0x308F ,	0x01 ,
		0x3090 ,	0x01 ,
		0x3091 ,	0x01 ,
		0x3092 ,	0x00 ,
		0x3093 ,	0x00 ,
		0x3094 ,	0x00 ,
		0x3095 ,	0x00 ,
		0x3096 ,	0x00 ,
		0x3097 ,	0x00 ,
		0x3098 ,	0x00 ,
		0x3099 ,	0x7D ,
		0x309A ,	0x00 ,
		0x309B ,	0x10 ,//
		0x309C ,	0x22 ,//
		0x309D ,	0x00 ,
		0x309E ,	0x5A ,
		0x309F ,	0x5A ,
		0x30A0 ,	0x2A ,
		0x30A1 ,	0x20 ,
		0x30A2 ,	0x02 ,//
		0x30A3 ,	0x22 ,
		0x30A4 ,	0x00 ,
		0x30A5 ,	0x00 ,
		0x30A6 ,	0x20 ,//
		0x30A7 ,	0x00 ,
		0x30A8 ,	0x20 ,//
		0x30A9 ,	0x00 ,
		0x30AA ,	0x20 ,//
		0x30AB ,	0x00 ,
		0x30AC ,	0x20 ,//
		0x30AD ,	0x00 ,
		0x30AE ,	0xB8 ,
		0x30AF ,	0x06 ,
		0x30B0 ,	0x43 ,//
		0x30B1 ,	0x00 ,
		0x30B2 ,	0x60 ,
		0x30B3 ,	0x12 ,
		0x30B4 ,	0x00 ,
		0x30B5 ,	0x00 ,
		0x30B6 ,	0x11 ,
		0x30B7 ,	0x0F ,
		0x30B8 ,	0x10 ,
		0x30B9 ,	0x00 ,
		0x30BA ,	0x00 ,
		0x30BB ,	0x00 ,
		0x30BC ,	0x03 ,
		0x30BD ,	0xF0 ,
		0x30BE ,	0x04 ,
		0x30BF ,	0x12 ,
		0x30C0 ,	0x10 ,
		0x30C1 ,	0x00 ,
		0x30C2 ,	0x14 ,
		0x30C3 ,	0x09 ,
		0x30C4 ,	0x00 ,
		0x30C5 ,	0x00 ,
		0x30C6 ,	0x08 ,
		0x30C7 ,	0x00 ,
		0x30C8 ,	0x00 ,
		0x30C9 ,	0xFE ,
		0x30CA ,	0x05 ,
		0x30CB ,	0x02 ,
		0x30CC ,	0xFF ,
		0x30CD ,	0x00 ,
		0x30CE ,	0x00 ,
		0x30CF ,	0x70 ,
		0x30D0 ,	0xFF ,
		0x30D1 ,	0x11 ,
		0x30D2 ,	0x13 ,
		0x30D3 ,	0x13 ,
		0x30D4 ,	0x11 ,
		0x30D5 ,	0x11 ,
		0x30D6 ,	0x0E ,
		0x30D7 ,	0x01 ,
		0x30D8 ,	0x31 ,
		0x30D9 ,	0xC7 ,
		0x30DA ,	0xFE ,
		0x30DB ,	0x07 ,
		0x30DC ,	0x00 ,
		0x30DD ,	0xFF ,
		0x30DE ,	0xFF ,
		0x30DF ,	0xFF ,
		0x30E0 ,	0x00 ,
		0x30E1 ,	0xFF ,
		0x30E2 ,	0xFF ,
		0x30E3 ,	0xFF ,
		0x30E4 ,	0x00 ,
		0x30E5 ,	0x00 ,
		0x30E6 ,	0x00 ,
		0x30E7 ,	0x00 ,
		0x30E8 ,	0x00 ,
		0x30E9 ,	0x00 ,
		0x30EA ,	0x00 ,
		0x30EB ,	0x01 ,
		0x30EC ,	0x02 ,
		0x30ED ,	0x42 ,
		0x30EE ,	0x44 ,
		0x30EF ,	0x00 ,
		0x30F0 ,	0xF0 ,
		0x30F1 ,	0x00 ,
		0x30F2 ,	0x00 ,
		0x30F3 ,	0x00 ,
		0x30F4 ,	0xF0 ,
		0x30F5 ,	0x00 ,
		0x30F6 ,	0x00 ,
		0x30F7 ,	0x00 ,
		0x30F8 ,	0xF0 ,
		0x30F9 ,	0x00 ,
		0x30FA ,	0x00 ,
		0x30FB ,	0x00 ,
		0x30FC ,	0x00 ,
		0x30FD ,	0x00 ,
		0x30FE ,	0x00 ,
		0x30FF ,	0x00

};

const unsigned short imx290_id03[] = {

		0x3100 ,	0x00 ,
		0x3101 ,	0x00 ,
		0x3102 ,	0x00 ,
		0x3103 ,	0x00 ,
		0x3104 ,	0x00 ,
		0x3105 ,	0x00 ,
		0x3106 ,	0x00 ,
		0x3107 ,	0x00 ,
		0x3108 ,	0x00 ,
		0x3109 ,	0x92 ,
		0x310A ,	0x00 ,
		0x310B ,	0x01 ,
		0x310C ,	0x00 ,
		0x310D ,	0x07 ,
		0x310E ,	0x01 ,
		0x310F ,	0x03 ,
		0x3110 ,	0xFF ,
		0x3111 ,	0x1F ,
		0x3112 ,	0x00 ,
		0x3113 ,	0x00 ,
		0x3114 ,	0xFF ,
		0x3115 ,	0x1F ,
		0x3116 ,	0x00 ,
		0x3117 ,	0x00 ,
		0x3118 ,	0x00 ,
		0x3119 ,	0x9E ,//
		0x311A ,	0x01 ,
		0x311B ,	0x01 ,
		0x311C ,	0x1E ,//
		0x311D ,	0x00 ,
		0x311E ,	0x08 ,//
		0x311F ,	0x00 ,
		0x3120 ,	0x01 ,
		0x3121 ,	0x00 ,
		0x3122 ,	0x00 ,
		0x3123 ,	0x40 ,
		0x3124 ,	0x00 ,
		0x3125 ,	0x00 ,
		0x3126 ,	0x00 ,
		0x3127 ,	0x00 ,
		0x3128 ,	0x05 ,//
		0x3129 ,	0x00 ,
		0x312A ,	0x00 ,
		0x312B ,	0x00 ,
		0x312C ,	0x00 ,
		0x312D ,	0x00 ,
		0x312E ,	0x00 ,
		0x312F ,	0x23 ,
		0x3130 ,	0x06 ,
		0x3131 ,	0x00 ,
		0x3132 ,	0x30 ,
		0x3133 ,	0x00 ,
		0x3134 ,	0x00 ,
		0x3135 ,	0x01 ,
		0x3136 ,	0x00 ,
		0x3137 ,	0x1F ,
		0x3138 ,	0x00 ,
		0x3139 ,	0x00 ,
		0x313A ,	0x82 ,
		0x313B ,	0x51 ,
		0x313C ,	0x41 ,
		0x313D ,	0x83 ,
		0x313E ,	0x00 ,
		0x313F ,	0x00 ,
		0x3140 ,	0x15 ,
		0x3141 ,	0x15 ,
		0x3142 ,	0x07 ,
		0x3143 ,	0x07 ,
		0x3144 ,	0x00 ,
		0x3145 ,	0x00 ,
		0x3146 ,	0x00 ,
		0x3147 ,	0x00 ,
		0x3148 ,	0x00 ,
		0x3149 ,	0x00 ,
		0x314A ,	0x03 ,
		0x314B ,	0x00 ,
		0x314C ,	0x00 ,
		0x314D ,	0x04 ,
		0x314E ,	0x24 ,
		0x314F ,	0x00 ,
		0x3150 ,	0x03 ,//
		0x3151 ,	0x00 ,
		0x3152 ,	0x07 ,
		0x3153 ,	0x40 ,
		0x3154 ,	0x01 ,
		0x3155 ,	0x02 ,
		0x3156 ,	0x02 ,
		0x3157 ,	0x00 ,
		0x3158 ,	0xFF ,
		0x3159 ,	0x83 ,
		0x315A ,	0x00 ,
		0x315B ,	0x80 ,
		0x315C ,	0xD8 ,
		0x315D ,	0x7D ,
		0x315E ,	0x1A ,//
		0x315F ,	0x80 ,
		0x3160 ,	0x00 ,
		0x3161 ,	0x00 ,
		0x3162 ,	0x00 ,
		0x3163 ,	0x01 ,
		0x3164 ,	0x1A ,//
		0x3165 ,	0x00 ,
		0x3166 ,	0x00 ,
		0x3167 ,	0x02 ,
		0x3168 ,	0x04 ,
		0x3169 ,	0x00 ,
		0x316A ,	0x10 ,
		0x316B ,	0x00 ,
		0x316C ,	0x00 ,
		0x316D ,	0x00 ,
		0x316E ,	0xFF ,
		0x316F ,	0x01 ,
		0x3170 ,	0x00 ,
		0x3171 ,	0x02 ,
		0x3172 ,	0x00 ,
		0x3173 ,	0x00 ,
		0x3174 ,	0x05 ,
		0x3175 ,	0x00 ,
		0x3176 ,	0x00 ,
		0x3177 ,	0x00 ,
		0x3178 ,	0x00 ,
		0x3179 ,	0x00 ,
		0x317A ,	0xFE ,
		0x317B ,	0x03 ,
		0x317C ,	0x00 ,
		0x317D ,	0x00 ,
		0x317E ,	0x00 ,
		0x317F ,	0x00 ,
		0x3180 ,	0xA5 ,
		0x3181 ,	0x07 ,
		0x3182 ,	0x00 ,
		0x3183 ,	0x00 ,
		0x3184 ,	0x02 ,
		0x3185 ,	0x00 ,
		0x3186 ,	0x0D ,
		0x3187 ,	0x00 ,
		0x3188 ,	0x32 ,
		0x3189 ,	0x00 ,
		0x318A ,	0x7A ,
		0x318B ,	0x04 ,
		0x318C ,	0xFC ,
		0x318D ,	0x03 ,
		0x318E ,	0xFC ,
		0x318F ,	0x03 ,
		0x3190 ,	0x06 ,
		0x3191 ,	0x00 ,
		0x3192 ,	0x00 ,
		0x3193 ,	0x02 ,
		0x3194 ,	0x06 ,
		0x3195 ,	0x1E ,
		0x3196 ,	0x21 ,
		0x3197 ,	0x00 ,
		0x3198 ,	0xB8 ,
		0x3199 ,	0x00 ,
		0x319A ,	0xD0 ,
		0x319B ,	0x07 ,
		0x319C ,	0x9C ,
		0x319D ,	0x04 ,
		0x319E ,	0x9B ,
		0x319F ,	0x04 ,
		0x31A0 ,	0xFC ,
		0x31A1 ,	0x00 ,
		0x31A2 ,	0x06 ,
		0x31A3 ,	0x00 ,
		0x31A4 ,	0xEC ,
		0x31A5 ,	0x01 ,
		0x31A6 ,	0x00 ,
		0x31A7 ,	0x00 ,
		0x31A8 ,	0x06 ,
		0x31A9 ,	0x06 ,
		0x31AA ,	0x50 ,
		0x31AB ,	0x00 ,
		0x31AC ,	0x02 ,
		0x31AD ,	0x01 ,
		0x31AE ,	0x00 ,
		0x31AF ,	0x00 ,
		0x31B0 ,	0x00 ,
		0x31B1 ,	0x00 ,
		0x31B2 ,	0x00 ,
		0x31B3 ,	0x00 ,
		0x31B4 ,	0x00 ,
		0x31B5 ,	0x00 ,
		0x31B6 ,	0x00 ,
		0x31B7 ,	0x00 ,
		0x31B8 ,	0x00 ,
		0x31B9 ,	0x9B ,
		0x31BA ,	0x04 ,
		0x31BB ,	0x00 ,
		0x31BC ,	0x00 ,
		0x31BD ,	0x00 ,
		0x31BE ,	0x00 ,
		0x31BF ,	0x00 ,
		0x31C0 ,	0x00 ,
		0x31C1 ,	0x1F ,
		0x31C2 ,	0x01 ,
		0x31C3 ,	0x00 ,
		0x31C4 ,	0x16 ,
		0x31C5 ,	0x00 ,
		0x31C6 ,	0x00 ,
		0x31C7 ,	0x00 ,
		0x31C8 ,	0x00 ,
		0x31C9 ,	0x00 ,
		0x31CA ,	0x00 ,
		0x31CB ,	0x00 ,
		0x31CC ,	0x00 ,
		0x31CD ,	0x00 ,
		0x31CE ,	0x00 ,
		0x31CF ,	0x00 ,
		0x31D0 ,	0x00 ,
		0x31D1 ,	0x00 ,
		0x31D2 ,	0x00 ,
		0x31D3 ,	0x00 ,
		0x31D4 ,	0x00 ,
		0x31D5 ,	0x00 ,
		0x31D6 ,	0x00 ,
		0x31D7 ,	0x00 ,
		0x31D8 ,	0x00 ,
		0x31D9 ,	0x00 ,
		0x31DA ,	0x00 ,
		0x31DB ,	0x00 ,
		0x31DC ,	0x00 ,
		0x31DD ,	0x00 ,
		0x31DE ,	0x00 ,
		0x31DF ,	0x00 ,
		0x31E0 ,	0x00 ,
		0x31E1 ,	0x00 ,
		0x31E2 ,	0x00 ,
		0x31E3 ,	0x00 ,
		0x31E4 ,	0x00 ,
		0x31E5 ,	0x00 ,
		0x31E6 ,	0x00 ,
		0x31E7 ,	0x00 ,
		0x31E8 ,	0x29 ,
		0x31E9 ,	0x05 ,
		0x31EA ,	0xFF ,
		0x31EB ,	0x07 ,
		0x31EC ,	0x0E ,//**************
		0x31ED ,	0x00 ,
		0x31EE ,	0x00 ,
		0x31EF ,	0x00 ,
		0x31F0 ,	0x01 ,
		0x31F1 ,	0x00 ,
		0x31F2 ,	0x00 ,
		0x31F3 ,	0x00 ,
		0x31F4 ,	0x78 ,
		0x31F5 ,	0x04 ,
		0x31F6 ,	0x00 ,
		0x31F7 ,	0x00 ,
		0x31F8 ,	0x00 ,
		0x31F9 ,	0x00 ,
		0x31FA ,	0x00 ,
		0x31FB ,	0x00 ,
		0x31FC ,	0x00 ,
		0x31FD ,	0x00 ,
		0x31FE ,	0x00 ,
		0x31FF ,	0x00
};

const unsigned short imx290_id04[] = {

		0x3200 ,	0xAA ,
		0x3201 ,	0x00 ,
		0x3202 ,	0x00 ,
		0x3203 ,	0x00 ,
		0x3204 ,	0x5A ,
		0x3205 ,	0xE0 ,
		0x3206 ,	0x15 ,
		0x3207 ,	0x00 ,
		0x3208 ,	0x56 ,
		0x3209 ,	0xF0 ,
		0x320A ,	0x23 ,
		0x320B ,	0x00 ,
		0x320C ,	0xFF ,
		0x320D ,	0x0F ,
		0x320E ,	0x00 ,
		0x320F ,	0x00 ,
		0x3210 ,	0xFF ,
		0x3211 ,	0x0F ,
		0x3212 ,	0x00 ,
		0x3213 ,	0x00 ,
		0x3214 ,	0x00 ,
		0x3215 ,	0xF0 ,
		0x3216 ,	0xFF ,
		0x3217 ,	0x00 ,
		0x3218 ,	0x00 ,
		0x3219 ,	0x00 ,
		0x321A ,	0x00 ,
		0x321B ,	0x00 ,
		0x321C ,	0x00 ,
		0x321D ,	0x00 ,
		0x321E ,	0x00 ,
		0x321F ,	0x00 ,
		0x3220 ,	0x01 ,
		0x3221 ,	0x50 ,
		0x3222 ,	0x08 ,
		0x3223 ,	0x41 ,
		0x3224 ,	0x01 ,
		0x3225 ,	0x30 ,
		0x3226 ,	0x00 ,
		0x3227 ,	0x00 ,
		0x3228 ,	0x06 ,
		0x3229 ,	0x81 ,
		0x322A ,	0x10 ,
		0x322B ,	0x00 ,
		0x322C ,	0x42 ,
		0x322D ,	0x31 ,
		0x322E ,	0x00 ,
		0x322F ,	0x00 ,
		0x3230 ,	0x06 ,
		0x3231 ,	0xD0 ,
		0x3232 ,	0x01 ,
		0x3233 ,	0x00 ,
		0x3234 ,	0x06 ,
		0x3235 ,	0x60 ,
		0x3236 ,	0x1A ,
		0x3237 ,	0x00 ,
		0x3238 ,	0xD7 ,
		0x3239 ,	0x50 ,
		0x323A ,	0x10 ,
		0x323B ,	0x00 ,
		0x323C ,	0xD9 ,
		0x323D ,	0xE0 ,
		0x323E ,	0x0F ,
		0x323F ,	0x00 ,
		0x3240 ,	0xD9 ,
		0x3241 ,	0xE0 ,
		0x3242 ,	0x0F ,
		0x3243 ,	0x00 ,
		0x3244 ,	0xDA ,
		0x3245 ,	0x80 ,
		0x3246 ,	0x0F ,
		0x3247 ,	0x00 ,
		0x3248 ,	0xF9 ,
		0x3249 ,	0xD0 ,
		0x324A ,	0x0F ,
		0x324B ,	0x00 ,
		0x324C ,	0x07 ,
		0x324D ,	0x40 ,
		0x324E ,	0x1A ,
		0x324F ,	0x00 ,
		0x3250 ,	0x07 ,
		0x3251 ,	0xD0 ,
		0x3252 ,	0x01 ,
		0x3253 ,	0x00 ,
		0x3254 ,	0xFF ,
		0x3255 ,	0xF3 ,
		0x3256 ,	0x3F ,
		0x3257 ,	0x00 ,
		0x3258 ,	0xD8 ,
		0x3259 ,	0x40 ,
		0x325A ,	0x10 ,
		0x325B ,	0x00 ,
		0x325C ,	0xD9 ,
		0x325D ,	0xE0 ,
		0x325E ,	0x0F ,
		0x325F ,	0x00 ,
		0x3260 ,	0xFF ,
		0x3261 ,	0xF3 ,
		0x3262 ,	0x3F ,
		0x3263 ,	0x00 ,
		0x3264 ,	0x08 ,
		0x3265 ,	0xE0 ,
		0x3266 ,	0x19 ,
		0x3267 ,	0x00 ,
		0x3268 ,	0x08 ,
		0x3269 ,	0x70 ,
		0x326A ,	0x01 ,
		0x326B ,	0x00 ,
		0x326C ,	0xFF ,
		0x326D ,	0x30 ,
		0x326E ,	0x10 ,
		0x326F ,	0x00 ,
		0x3270 ,	0xFF ,
		0x3271 ,	0xF3 ,
		0x3272 ,	0x3F ,
		0x3273 ,	0x00 ,
		0x3274 ,	0x9F ,
		0x3275 ,	0x31 ,
		0x3276 ,	0x1A ,
		0x3277 ,	0x00 ,
		0x3278 ,	0x18 ,
		0x3279 ,	0xC0 ,
		0x327A ,	0x01 ,
		0x327B ,	0x00 ,
		0x327C ,	0x05 ,
		0x327D ,	0x00 ,
		0x327E ,	0x00 ,
		0x327F ,	0x00 ,
		0x3280 ,	0xFE ,
		0x3281 ,	0x90 ,
		0x3282 ,	0x0D ,
		0x3283 ,	0x00 ,
		0x3284 ,	0x04 ,
		0x3285 ,	0x10 ,
		0x3286 ,	0x00 ,
		0x3287 ,	0x00 ,
		0x3288 ,	0xFD ,
		0x3289 ,	0xA0 ,
		0x328A ,	0x0D ,
		0x328B ,	0x03 ,
		0x328C ,	0x04 ,
		0x328D ,	0x10 ,
		0x328E ,	0x00 ,
		0x328F ,	0x00 ,
		0x3290 ,	0xFF ,
		0x3291 ,	0xF3 ,
		0x3292 ,	0x3F ,
		0x3293 ,	0x00 ,
		0x3294 ,	0x05 ,
		0x3295 ,	0x00 ,
		0x3296 ,	0x00 ,
		0x3297 ,	0x00 ,
		0x3298 ,	0xFF ,
		0x3299 ,	0xF3 ,
		0x329A ,	0x3F ,
		0x329B ,	0x00 ,
		0x329C ,	0xFF ,
		0x329D ,	0xF3 ,
		0x329E ,	0x3F ,
		0x329F ,	0x00 ,
		0x32A0 ,	0xFF ,
		0x32A1 ,	0xF3 ,
		0x32A2 ,	0x3F ,
		0x32A3 ,	0x00 ,
		0x32A4 ,	0x04 ,
		0x32A5 ,	0x10 ,
		0x32A6 ,	0x08 ,
		0x32A7 ,	0x00 ,
		0x32A8 ,	0x00 ,
		0x32A9 ,	0x90 ,
		0x32AA ,	0x0D ,
		0x32AB ,	0x00 ,
		0x32AC ,	0x08 ,
		0x32AD ,	0x40 ,
		0x32AE ,	0x00 ,
		0x32AF ,	0x00 ,
		0x32B0 ,	0xDC ,
		0x32B1 ,	0x90 ,
		0x32B2 ,	0x0D ,
		0x32B3 ,	0x00 ,
		0x32B4 ,	0xFF ,
		0x32B5 ,	0xF3 ,
		0x32B6 ,	0x3F ,
		0x32B7 ,	0x00 ,
		0x32B8 ,	0x50 ,//
		0x32B9 ,	0x10 ,//
		0x32BA ,	0x00 ,//
		0x32BB ,	0x04 ,//
		0x32BC ,	0x51 ,
		0x32BD ,	0x20 ,
		0x32BE ,	0x00 ,
		0x32BF ,	0x00 ,
		0x32C0 ,	0x84 ,
		0x32C1 ,	0x10 ,
		0x32C2 ,	0x08 ,
		0x32C3 ,	0x00 ,
		0x32C4 ,	0xFF ,
		0x32C5 ,	0xF3 ,
		0x32C6 ,	0x3F ,
		0x32C7 ,	0x00 ,
		0x32C8 ,	0x50 ,//
		0x32C9 ,	0x10 ,//
		0x32CA ,	0x00 ,//
		0x32CB ,	0x04 ,//
		0x32CC ,	0x51 ,
		0x32CD ,	0x20 ,
		0x32CE ,	0x00 ,
		0x32CF ,	0x00 ,
		0x32D0 ,	0x9A ,
		0x32D1 ,	0xF0 ,
		0x32D2 ,	0x0C ,
		0x32D3 ,	0x00 ,
		0x32D4 ,	0x30 ,
		0x32D5 ,	0x41 ,
		0x32D6 ,	0x19 ,
		0x32D7 ,	0x00 ,
		0x32D8 ,	0x96 ,
		0x32D9 ,	0x30 ,
		0x32DA ,	0x0D ,
		0x32DB ,	0x00 ,
		0x32DC ,	0x2C ,
		0x32DD ,	0x81 ,
		0x32DE ,	0x19 ,
		0x32DF ,	0x00 ,
		0x32E0 ,	0x92 ,
		0x32E1 ,	0xC0 ,
		0x32E2 ,	0x08 ,
		0x32E3 ,	0x00 ,
		0x32E4 ,	0x09 ,
		0x32E5 ,	0xE0 ,
		0x32E6 ,	0x08 ,
		0x32E7 ,	0x00 ,
		0x32E8 ,	0x12 ,
		0x32E9 ,	0x21 ,
		0x32EA ,	0x12 ,
		0x32EB ,	0x00 ,
		0x32EC ,	0x0A ,
		0x32ED ,	0xF0 ,
		0x32EE ,	0x08 ,
		0x32EF ,	0x00 ,
		0x32F0 ,	0x13 ,
		0x32F1 ,	0x31 ,
		0x32F2 ,	0x12 ,
		0x32F3 ,	0x00 ,
		0x32F4 ,	0x0B ,
		0x32F5 ,	0x00 ,
		0x32F6 ,	0x09 ,
		0x32F7 ,	0x00 ,
		0x32F8 ,	0x14 ,
		0x32F9 ,	0x41 ,
		0x32FA ,	0x12 ,
		0x32FB ,	0x00 ,
		0x32FC ,	0x00 ,
		0x32FD ,	0x00 ,
		0x32FE ,	0x00 ,
		0x32FF ,	0x00
};

const unsigned short imx290_id05[] = {

		0x3300 , 	0x01 ,
		0x3301 ,	0x10 ,
		0x3302 ,	0x01 ,
		0x3303 ,	0x00 ,
		0x3304 ,	0x0A ,
		0x3305 ,	0xA1 ,
		0x3306 ,	0x11 ,
		0x3307 ,	0x00 ,
		0x3308 ,	0x02 ,
		0x3309 ,	0x20 ,
		0x330A ,	0x01 ,
		0x330B ,	0x00 ,
		0x330C ,	0x0B ,
		0x330D ,	0xB1 ,
		0x330E ,	0x11 ,
		0x330F ,	0x00 ,
		0x3310 ,	0x03 ,
		0x3311 ,	0x30 ,
		0x3312 ,	0x01 ,
		0x3313 ,	0x00 ,
		0x3314 ,	0x0C ,
		0x3315 ,	0xC1 ,
		0x3316 ,	0x11 ,
		0x3317 ,	0x00 ,
		0x3318 ,	0x01 ,
		0x3319 ,	0x90 ,
		0x331A ,	0x00 ,
		0x331B ,	0x00 ,
		0x331C ,	0x0A ,
		0x331D ,	0x21 ,
		0x331E ,	0x11 ,
		0x331F ,	0x00 ,
		0x3320 ,	0x0D ,
		0x3321 ,	0x10 ,
		0x3322 ,	0x01 ,
		0x3323 ,	0x00 ,
		0x3324 ,	0x16 ,
		0x3325 ,	0xA1 ,
		0x3326 ,	0x11 ,
		0x3327 ,	0x00 ,
		0x3328 ,	0x92 ,
		0x3329 ,	0xC0 ,
		0x332A ,	0x08 ,
		0x332B ,	0x00 ,
		0x332C ,	0xD3 ,//
		0x332D ,	0x10 ,//
		0x332E ,	0x0D ,//
		0x332F ,	0x02 ,
		0x3330 ,	0xA0 ,
		0x3331 ,	0x50 ,
		0x3332 ,	0x0D ,
		0x3333 ,	0x01 ,
		0x3334 ,	0x0F ,
		0x3335 ,	0x00 ,
		0x3336 ,	0x00 ,
		0x3337 ,	0x00 ,
		0x3338 ,	0x1E ,
		0x3339 ,	0x00 ,
		0x333A ,	0x1E ,
		0x333B ,	0x00 ,
		0x333C ,	0x00 ,
		0x333D ,	0x00 ,
		0x333E ,	0x00 ,
		0x333F ,	0x00 ,
		0x3340 ,	0x9E ,
		0x3341 ,	0x01 ,
		0x3342 ,	0x78 ,
		0x3343 ,	0x00 ,
		0x3344 ,	0x3C ,
		0x3345 ,	0x00 ,
		0x3346 ,	0x1E ,
		0x3347 ,	0x00 ,
		0x3348 ,	0x00 ,
		0x3349 ,	0x00 ,
		0x334A ,	0x00 ,
		0x334B ,	0x00 ,
		0x334C ,	0x00 ,
		0x334D ,	0x00 ,
		0x334E ,	0x00 ,
		0x334F ,	0x00 ,
		0x3350 ,	0x03 ,
		0x3351 ,	0x60 ,
		0x3352 ,	0x00 ,
		0x3353 ,	0x00 ,
		0x3354 ,	0x04 ,
		0x3355 ,	0xF0 ,
		0x3356 ,	0x07 ,
		0x3357 ,	0x00 ,
		0x3358 ,	0x06 ,//
		0x3359 ,	0xE1 ,//
		0x335A ,	0x11 ,//
		0x335B ,	0x00 ,
		0x335C ,	0x88 ,
		0x335D ,	0x40 ,
		0x335E ,	0x08 ,
		0x335F ,	0x00 ,
		0x3360 ,	0x1E ,//
		0x3361 ,	0x61 ,//
		0x3362 ,	0x10 ,//
		0x3363 ,	0x00 ,
		0x3364 ,	0x7A ,
		0x3365 ,	0x40 ,
		0x3366 ,	0x00 ,
		0x3367 ,	0x00 ,
		0x3368 ,	0x04 ,
		0x3369 ,	0xC0 ,
		0x336A ,	0x06 ,
		0x336B ,	0x00 ,
		0x336C ,	0x04 ,
		0x336D ,	0x10 ,
		0x336E ,	0x08 ,
		0x336F ,	0x00 ,
		0x3370 ,	0x00 ,
		0x3371 ,	0x00 ,
		0x3372 ,	0x00 ,
		0x3373 ,	0x00 ,
		0x3374 ,	0x00 ,
		0x3375 ,	0x00 ,
		0x3376 ,	0x00 ,
		0x3377 ,	0x00 ,
		0x3378 ,	0x00 ,
		0x3379 ,	0x00 ,
		0x337A ,	0x00 ,
		0x337B ,	0x00 ,
		0x337C ,	0x00 ,
		0x337D ,	0x00 ,
		0x337E ,	0x00 ,
		0x337F ,	0x00 ,
		0x3380 ,	0x90 ,
		0x3381 ,	0x80 ,
		0x3382 ,	0x19 ,
		0x3383 ,	0x00 ,
		0x3384 ,	0x96 ,
		0x3385 ,	0x80 ,
		0x3386 ,	0x19 ,
		0x3387 ,	0x00 ,
		0x3388 ,	0x00 ,
		0x3389 ,	0x00 ,
		0x338A ,	0x00 ,
		0x338B ,	0x00 ,
		0x338C ,	0x00 ,
		0x338D ,	0x00 ,
		0x338E ,	0x00 ,
		0x338F ,	0x00 ,
		0x3390 ,	0xA0 ,
		0x3391 ,	0x31 ,
		0x3392 ,	0x08 ,
		0x3393 ,	0x02 ,
		0x3394 ,	0xA0 ,
		0x3395 ,	0x01 ,
		0x3396 ,	0x00 ,
		0x3397 ,	0x00 ,
		0x3398 ,	0xFF ,
		0x3399 ,	0xF3 ,
		0x339A ,	0x3F ,
		0x339B ,	0x00 ,
		0x339C ,	0xA0 ,
		0x339D ,	0x91 ,
		0x339E ,	0x0D ,
		0x339F ,	0x02 ,
		0x33A0 ,	0x00 ,
		0x33A1 ,	0x00 ,
		0x33A2 ,	0x00 ,
		0x33A3 ,	0x00 ,
		0x33A4 ,	0x00 ,
		0x33A5 ,	0x00 ,
		0x33A6 ,	0x00 ,
		0x33A7 ,	0x00 ,
		0x33A8 ,	0x00 ,
		0x33A9 ,	0x00 ,
		0x33AA ,	0x00 ,
		0x33AB ,	0x00 ,
		0x33AC ,	0x00 ,
		0x33AD ,	0x00 ,
		0x33AE ,	0x00 ,
		0x33AF ,	0x00 ,
		0x33B0 ,	0x50 ,//
		0x33B1 ,	0x80 ,
		0x33B2 ,	0x1A ,//
		0x33B3 ,	0x04 ,//
		0x33B4 ,	0xFD ,
		0x33B5 ,	0xA0 ,
		0x33B6 ,	0x0D ,
		0x33B7 ,	0x00 ,
		0x33B8 ,	0xFF ,
		0x33B9 ,	0xF3 ,
		0x33BA ,	0x3F ,
		0x33BB ,	0x00 ,
		0x33BC ,	0xDA ,
		0x33BD ,	0xD0 ,
		0x33BE ,	0x0F ,
		0x33BF ,	0x00 ,
		0x33C0 ,	0xFF ,
		0x33C1 ,	0xF3 ,
		0x33C2 ,	0x3F ,
		0x33C3 ,	0x00 ,
		0x33C4 ,	0x00 ,
		0x33C5 ,	0x00 ,
		0x33C6 ,	0x00 ,
		0x33C7 ,	0x00 ,
		0x33C8 ,	0x00 ,
		0x33C9 ,	0x00 ,
		0x33CA ,	0x00 ,
		0x33CB ,	0x00 ,
		0x33CC ,	0x00 ,
		0x33CD ,	0x00 ,
		0x33CE ,	0x00 ,
		0x33CF ,	0x00 ,
		0x33D0 ,	0xFF ,
		0x33D1 ,	0xF3 ,
		0x33D2 ,	0x3F ,
		0x33D3 ,	0x00 ,
		0x33D4 ,	0xFF ,
		0x33D5 ,	0xF3 ,
		0x33D6 ,	0x3F ,
		0x33D7 ,	0x00 ,
		0x33D8 ,	0xFF ,
		0x33D9 ,	0xF3 ,
		0x33DA ,	0x3F ,
		0x33DB ,	0x00 ,
		0x33DC ,	0xFF ,
		0x33DD ,	0xF3 ,
		0x33DE ,	0x3F ,
		0x33DF ,	0x00 ,
		0x33E0 ,	0xFF ,
		0x33E1 ,	0xF3 ,
		0x33E2 ,	0x3F ,
		0x33E3 ,	0x00 ,
		0x33E4 ,	0x00 ,
		0x33E5 ,	0x00 ,
		0x33E6 ,	0x00 ,
		0x33E7 ,	0x00 ,
		0x33E8 ,	0xF9 ,
		0x33E9 ,	0x00 ,
		0x33EA ,	0x00 ,
		0x33EB ,	0x00 ,
		0x33EC ,	0x00 ,
		0x33ED ,	0x00 ,
		0x33EE ,	0x00 ,
		0x33EF ,	0x00 ,
		0x33F0 ,	0x00 ,
		0x33F1 ,	0x00 ,
		0x33F2 ,	0x00 ,
		0x33F3 ,	0x00 ,
		0x33F4 ,	0x00 ,
		0x33F5 ,	0x00 ,
		0x33F6 ,	0x00 ,
		0x33F7 ,	0x00 ,
		0x33F8 ,	0x00 ,
		0x33F9 ,	0x00 ,
		0x33FA ,	0x00 ,
		0x33FB ,	0x00 ,
		0x33FC ,	0x00 ,
		0x33FD ,	0x00 ,
		0x33FE ,	0x00 ,
		0x33FF ,	0x00

};

const unsigned short imx290_id06[] = {

		0x3400 ,	0x00 ,
		0x3401 ,	0x00 ,
		0x3402 ,	0x11 ,
		0x3403 ,	0x11 ,
		0x3404 ,	0x00 ,
		0x3405 ,	0x20 ,
		0x3406 ,	0x00 ,
		0x3407 ,	0x03 ,
		0x3408 ,	0x00 ,
		0x3409 ,	0x00 ,
		0x340A ,	0x00 ,
		0x340B ,	0x00 ,
		0x340C ,	0x00 ,
		0x340D ,	0x00 ,
		0x340E ,	0x00 ,
		0x340F ,	0x0F ,
		0x3410 ,	0x20 ,
		0x3411 ,	0x00 ,
		0x3412 ,	0x02 ,
		0x3413 ,	0x01 ,
		0x3414 ,	0x0A ,
		0x3415 ,	0x01 ,
		0x3416 ,	0x00 ,
		0x3417 ,	0x00 ,
		0x3418 ,	0x49 ,
		0x3419 ,	0x04 ,
		0x341A ,	0x00 ,
		0x341B ,	0x00 ,
		0x341C ,	0x40 ,
		0x341D ,	0x00 ,
		0x341E ,	0x00 ,
		0x341F ,	0x00 ,
		0x3420 ,	0x00 ,
		0x3421 ,	0x00 ,
		0x3422 ,	0x00 ,
		0x3423 ,	0x00 ,
		0x3424 ,	0x00 ,
		0x3425 ,	0x00 ,
		0x3426 ,	0x08 ,
		0x3427 ,	0x00 ,
		0x3428 ,	0x00 ,
		0x3429 ,	0x00 ,
		0x342A ,	0x00 ,
		0x342B ,	0x00 ,
		0x342C ,	0x47 ,
		0x342D ,	0x00 ,
		0x342E ,	0x00 ,
		0x342F ,	0x00 ,
		0x3430 ,	0x0F ,
		0x3431 ,	0x00 ,
		0x3432 ,	0x03 ,
		0x3433 ,	0x00 ,
		0x3434 ,	0x00 ,
		0x3435 ,	0x00 ,
		0x3436 ,	0x00 ,
		0x3437 ,	0x00 ,
		0x3438 ,	0x00 ,
		0x3439 ,	0x00 ,
		0x343A ,	0x00 ,
		0x343B ,	0x00 ,
		0x343C ,	0x00 ,
		0x343D ,	0x00 ,
		0x343E ,	0x00 ,
		0x343F ,	0x00 ,
		0x3440 ,	0x00 ,
		0x3441 ,	0x0C ,
		0x3442 ,	0x0C ,
		0x3443 ,	0x03 ,//
		0x3444 ,	0x20 ,// clock update
		0x3445 ,	0x25 ,
		0x3446 ,	0x47 ,
		0x3447 ,	0x00 ,
		0x3448 ,	0x1F ,
		0x3449 ,	0x00 ,
		0x344A ,	0x17 ,
		0x344B ,	0x00 ,
		0x344C ,	0x0F ,
		0x344D ,	0x00 ,
		0x344E ,	0x17 ,
		0x344F ,	0x00 ,
		0x3450 ,	0x47 ,
		0x3451 ,	0x00 ,
		0x3452 ,	0x0F ,
		0x3453 ,	0x00 ,
		0x3454 ,	0x0F ,
		0x3455 ,	0x00 ,
		0x3456 ,	0x00 ,
		0x3457 ,	0x00 ,
		0x3458 ,	0x32 ,
		0x3459 ,	0x30 ,
		0x345A ,	0x00 ,
		0x345B ,	0x00 ,
		0x345C ,	0x00 ,
		0x345D ,	0x00 ,
		0x345E ,	0x00 ,
		0x345F ,	0x00 ,
		0x3460 ,	0x00 ,
		0x3461 ,	0x00 ,
		0x3462 ,	0x00 ,
		0x3463 ,	0x00 ,
		0x3464 ,	0x00 ,
		0x3465 ,	0x00 ,
		0x3466 ,	0x00 ,
		0x3467 ,	0x00 ,
		0x3468 ,	0x00 ,
		0x3469 ,	0x01 ,
		0x346A ,	0x00 ,
		0x346B ,	0x01 ,
		0x346C ,	0x00 ,
		0x346D ,	0x00 ,
		0x346E ,	0x00 ,
		0x346F ,	0xE4 ,
		0x3470 ,	0x00 ,
		0x3471 ,	0x00 ,
		0x3472 ,	0x9C ,
		0x3473 ,	0x07 ,
		0x3474 ,	0x00 ,
		0x3475 ,	0x00 ,
		0x3476 ,	0x00 ,
		0x3477 ,	0x00 ,
		0x3478 ,	0x00 ,
		0x3479 ,	0x00 ,
		0x347A ,	0x26 ,
		0x347B ,	0x24 ,
		0x347C ,	0x00 ,
		0x347D ,	0x01 ,
		0x347E ,	0x00 ,
		0x347F ,	0x01 ,
		0x3480 ,	0x49 ,//
		0x3481 ,	0x00 ,
		0x3482 ,	0x00 ,
		0x3483 ,	0x00 ,
		0x3484 ,	0x00 ,
		0x3485 ,	0x00 ,
		0x3486 ,	0x00 ,
		0x3487 ,	0x00 ,
		0x3488 ,	0x00 ,
		0x3489 ,	0x00 ,
		0x348A ,	0x00 ,
		0x348B ,	0x00 ,
		0x348C ,	0x00 ,
		0x348D ,	0x01 ,
		0x348E ,	0x24 ,
		0x348F ,	0x02 ,
		0x3490 ,	0x01 ,
		0x3491 ,	0x00 ,
		0x3492 ,	0xF0 ,
		0x3493 ,	0x00 ,
		0x3494 ,	0x0C ,
		0x3495 ,	0x0C ,
		0x3496 ,	0x00 ,
		0x3497 ,	0x00 ,
		0x3498 ,	0x2C ,
		0x3499 ,	0x01 ,
		0x349A ,	0x01 ,
		0x349B ,	0x00 ,
		0x349C ,	0x00 ,
		0x349D ,	0x00 ,
		0x349E ,	0xA4 ,
		0x349F ,	0x01 ,
		0x34A0 ,	0x01 ,
		0x34A1 ,	0x00 ,
		0x34A2 ,	0xF0 ,
		0x34A3 ,	0x00 ,
		0x34A4 ,	0xF0 ,
		0x34A5 ,	0x00 ,
		0x34A6 ,	0xF0 ,
		0x34A7 ,	0x00 ,
		0x34A8 ,	0x00 ,
		0x34A9 ,	0x00 ,
		0x34AA ,	0x00 ,
		0x34AB ,	0x00 ,
		0x34AC ,	0x00 ,
		0x34AD ,	0x00 ,
		0x34AE ,	0x00 ,
		0x34AF ,	0x00 ,
		0x34B0 ,	0x01 ,
		0x34B1 ,	0x00 ,
		0x34B2 ,	0x00 ,
		0x34B3 ,	0x00 ,
		0x34B4 ,	0x00 ,
		0x34B5 ,	0x00 ,
		0x34B6 ,	0x00 ,
		0x34B7 ,	0x00 ,
		0x34B8 ,	0x00 ,
		0x34B9 ,	0x00 ,
		0x34BA ,	0x00 ,
		0x34BB ,	0x00 ,
		0x34BC ,	0x00 ,
		0x34BD ,	0x00 ,
		0x34BE ,	0x00 ,
		0x34BF ,	0x00 ,
		0x34C0 ,	0x00 ,
		0x34C1 ,	0x00 ,
		0x34C2 ,	0x00 ,
		0x34C3 ,	0x00 ,
		0x34C4 ,	0x01 ,
		0x34C5 ,	0x00 ,
		0x34C6 ,	0x00 ,
		0x34C7 ,	0x00 ,
		0x34C8 ,	0x03 ,
		0x34C9 ,	0x65 ,
		0x34CA ,	0x04 ,
		0x34CB ,	0x00 ,
		0x34CC ,	0x30 ,
		0x34CD ,	0x11 ,
		0x34CE ,	0x00 ,
		0x34CF ,	0x00 ,
		0x34D0 ,	0x00 ,
		0x34D1 ,	0x00 ,
		0x34D2 ,	0x9B ,
		0x34D3 ,	0x07 ,
		0x34D4 ,	0x48 ,
		0x34D5 ,	0x04 ,
		0x34D6 ,	0x9C ,
		0x34D7 ,	0x07 ,
		0x34D8 ,	0x49 ,
		0x34D9 ,	0x04 ,
		0x34DA ,	0x00 ,
		0x34DB ,	0x00 ,
		0x34DC ,	0x00 ,
		0x34DD ,	0x00 ,
		0x34DE ,	0x9B ,
		0x34DF ,	0x07 ,
		0x34E0 ,	0x54 ,
		0x34E1 ,	0x04 ,
		0x34E2 ,	0x60 ,
		0x34E3 ,	0x01 ,
		0x34E4 ,	0x20 ,
		0x34E5 ,	0x01 ,
		0x34E6 ,	0x9C ,
		0x34E7 ,	0x07 ,
		0x34E8 ,	0x55 ,
		0x34E9 ,	0x04 ,
		0x34EA ,	0x00 ,
		0x34EB ,	0x00 ,
		0x34EC ,	0x0B ,
		0x34ED ,	0x00 ,
		0x34EE ,	0x0C ,
		0x34EF ,	0x00 ,
		0x34F0 ,	0x00 ,
		0x34F1 ,	0x00 ,
		0x34F2 ,	0x0B ,
		0x34F3 ,	0x00 ,
		0x34F4 ,	0x06 ,
		0x34F5 ,	0x00 ,
		0x34F6 ,	0x0C ,
		0x34F7 ,	0x00 ,
		0x34F8 ,	0x00 ,
		0x34F9 ,	0x00 ,
		0x34FA ,	0x00 ,
		0x34FB ,	0x00 ,
		0x34FC ,	0x00 ,
		0x34FD ,	0x00 ,
		0x34FE ,	0x00 ,
		0x34FF ,	0x00
};
#endif