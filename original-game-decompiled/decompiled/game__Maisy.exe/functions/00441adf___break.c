
/* ==== __break @ 00441adf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00441adf-00441adf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


