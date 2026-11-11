
/* ==== __break @ 0043f32d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f32d-0043f32d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


