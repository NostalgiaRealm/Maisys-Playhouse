
/* ==== __break @ 0043f32b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043f32b-0043f32b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


