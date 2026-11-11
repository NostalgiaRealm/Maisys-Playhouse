
/* ==== __break @ 0040ddea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040ddea-0040ddea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


