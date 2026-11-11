
/* ==== __break @ 0041be44 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be44-0041be44
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


