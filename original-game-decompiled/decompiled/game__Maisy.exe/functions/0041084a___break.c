
/* ==== __break @ 0041084a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041084a-0041084a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


