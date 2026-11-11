
/* ==== __break @ 00470bcf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00470bcf-00470bcf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


