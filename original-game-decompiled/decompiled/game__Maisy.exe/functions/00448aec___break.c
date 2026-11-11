
/* ==== __break @ 00448aec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448aec-00448aec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


