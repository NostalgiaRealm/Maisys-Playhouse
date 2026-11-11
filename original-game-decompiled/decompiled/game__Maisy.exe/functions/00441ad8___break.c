
/* ==== __break @ 00441ad8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441ad8-00441ad8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


