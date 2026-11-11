
/* ==== __break @ 00492898 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00492898-00492898
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


