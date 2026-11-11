
/* ==== __break @ 00441ad3 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441ad3-00441ad3
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


