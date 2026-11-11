
/* ==== __break @ 00441acc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441acc-00441acc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


