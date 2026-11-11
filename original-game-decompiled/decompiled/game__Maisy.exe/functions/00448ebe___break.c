
/* ==== __break @ 00448ebe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ebe-00448ebe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


