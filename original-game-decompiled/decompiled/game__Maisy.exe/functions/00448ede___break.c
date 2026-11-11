
/* ==== __break @ 00448ede ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ede-00448ede
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


