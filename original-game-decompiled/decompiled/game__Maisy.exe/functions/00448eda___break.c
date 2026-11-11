
/* ==== __break @ 00448eda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448eda-00448eda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


