
/* ==== __break @ 00450aec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450aec-00450aec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


