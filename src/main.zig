const c = @cImport({
    @cInclude("bindings.h");
});

pub fn main() !void {
    c.doSomeCppThing();
}
