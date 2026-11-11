
/* ==== __break @ 00493bae ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00493bae-00493bae
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


