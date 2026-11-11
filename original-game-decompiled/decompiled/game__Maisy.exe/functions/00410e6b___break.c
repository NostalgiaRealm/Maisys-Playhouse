
/* ==== __break @ 00410e6b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00410e6b-00410e6b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


