#ifdef GL_ES
precision mediump float; // medium precission 
// precision lowp float; // low precission
#endif

uniform float u_time;
uniform vec2 u_mouse;
uniform vec2 u_resolution;

vec4 red(){
	return vec4(1.0,0.0,0.0,1.0);
}

vec4 blue(){
	// return vec4(vec3(0.0,0.0,abs(sin(u_time))),1.0);
	return vec4(vec3(0.0,0.0,abs(tan(u_time))),1.0);
}

void main(){
	// gl_FragColor = vec4(1,0,0,1);
	// gl_FragColor = blue();
	vec2 st = gl_FragCoord.xy/u_resolution;
	gl_FragColor = vec4(0.0, st.y*1.2, st.x*1.2, 1.0);

	// gl_FragColor = vec4(abs(acos(u_time)), abs(sin(u_time)), abs(cos(u_time)), 1.0);
}

