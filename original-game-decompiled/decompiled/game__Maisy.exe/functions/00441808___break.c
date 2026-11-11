
/* ==== __break @ 00441808 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441808-00441808
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


