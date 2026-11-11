
/* ==== __break @ 0041be47 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0041be47-0041be47
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


