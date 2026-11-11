
/* ==== __break @ 00448ebf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00448ebf-00448ebf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


