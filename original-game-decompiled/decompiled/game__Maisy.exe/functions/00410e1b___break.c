
/* ==== __break @ 00410e1b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410e1b-00410e1b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


