
/* ==== __break @ 14010a69 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a69-14010a69
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


