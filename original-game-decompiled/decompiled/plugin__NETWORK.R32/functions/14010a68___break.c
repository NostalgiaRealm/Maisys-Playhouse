
/* ==== __break @ 14010a68 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14010a68-14010a68
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


