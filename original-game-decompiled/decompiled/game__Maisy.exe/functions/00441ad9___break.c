
/* ==== __break @ 00441ad9 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441ad9-00441ad9
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


