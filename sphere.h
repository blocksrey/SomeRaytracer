typedef struct {
    vec3 p;
    float r;
} sphere;

sphere spherenew(vec3 p, float r) {
    sphere s;
    s.p = p;
    s.r = r;
    return s;
}
