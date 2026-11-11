
/* ==== __break @ 00448aee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448aee-00448aee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


