
/* ==== __break @ 0041b19f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041b19f-0041b19f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


