
/* ==== __break @ 0040ddee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040ddee-0040ddee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


