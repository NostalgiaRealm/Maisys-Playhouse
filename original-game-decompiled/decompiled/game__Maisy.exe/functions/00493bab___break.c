
/* ==== __break @ 00493bab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493bab-00493bab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


